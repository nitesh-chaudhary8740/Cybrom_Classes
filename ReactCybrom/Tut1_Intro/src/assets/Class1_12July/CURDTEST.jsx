import React, { useEffect, useState } from 'react';
// import "../mycss/mystyle.css";
import axios from "axios";

function CURDTEST({ API }) {
    const [formData, setFormData] = useState({
        name: "",
        email: "",
        mobile: "",
        password: ""
    });

    const [fetchedData, setFetchedData] = useState(null);
    const [currentUserIndex, setCurrentUserIndex] = useState(null);
    const [editingTheData, setEditingTheData] = useState(false);

    async function handleSubmit(e) {
        e.preventDefault();
        if (!formData?.name || !formData.email || !formData?.mobile || !formData?.password) {
            alert("fill all fileds");
            return;
        }
        try {
            await axios.post(API, formData);
            setFormData({
                name: "",
                email: "",
                mobile: "",
                password: ""
            });
            fetchTheData();
        } catch (error) {
            console.log(error);
        }
    }

    function handleChange(e) {
        const { name, value } = e.target;
        setFormData((prev) => ({
            ...prev,
            [name]: value
        }));
    }

    async function fetchTheData() {
        try {
            const response = await axios.get(API);
            const data = await response.data;
            setFetchedData(data);
        } catch (e) {
            console.log(e);
        }
    }

    async function deleteTheData(selectedId) {
        try {
            await axios.delete(`${API}/${selectedId}`);
            fetchTheData();
        } catch (e) {
            console.log(e);
        }
    }

    async function editTheData(selectedId) {
        try {
            console.log(selectedId);
            await axios.put(`${API}/${selectedId}`, formData);
            setFormData({ name: "", email: "", mobile: "", password: "" });
            fetchTheData();
            setEditingTheData(false);
        } catch (e) {
            console.log(e);
        }
    }

    useEffect(() => {
        fetchTheData();
    }, []);

    return (
        <div className='crud-container'>
            <form action="" onSubmit={editingTheData ? (e) => {
                e.preventDefault();
                editTheData(fetchedData[currentUserIndex].id);
            } : handleSubmit}>
                <fieldset>
                    <legend>{editingTheData ? "Edit User" : "Add New User"}</legend>
                    <input type="text" name='name' value={formData?.name || ""} placeholder="Name" onChange={handleChange} /><br /><br />
                    <input type="text" name='email' value={formData?.email || ""} placeholder="Email" onChange={handleChange} /><br /><br />
                    <input type="text" name='mobile' value={formData?.mobile || ""} placeholder="Mobile" onChange={handleChange} /><br /><br />
                    <input type="text" name='password' value={formData?.password || ""} placeholder="Password" onChange={handleChange} /><br /><br />
                    <input type='submit' value={editingTheData ? "Save" : "Add New User"} />
                    {editingTheData &&
                        <button type='button' className="cancel-btn" onClick={() => {
                            setFormData({ name: "", email: "", mobile: "", password: "" });
                            setEditingTheData(false);
                        }}>CANCEL</button>
                    }
                </fieldset>
            </form>

            {fetchedData ?
                <div className='user-list-container'>
                    {fetchedData.map((details,index) => {
                        return (
                            <div className='user-card' key={details.id}>
                                <span>name: {details.name} </span><br />
                                <span>email: {details.email} </span><br />
                                <span>mobile: {details.mobile} </span><br />
                                <span>password: {details.password} </span><br />
                                <div className='user-card-actions'>
                                    <button onClick={() => { deleteTheData(details.id) }}>delete</button>
                                    <button onClick={() => {
                                        setCurrentUserIndex(index); // It's better to store the ID directly
                                        setFormData(details);
                                        setEditingTheData(true);
                                    }}>edit</button>
                                </div>
                            </div>
                        )
                    })}
                </div>
                :
                <p className="data-loading">data is loading..........</p>
            }
        </div>
    );
}

export default CURDTEST;