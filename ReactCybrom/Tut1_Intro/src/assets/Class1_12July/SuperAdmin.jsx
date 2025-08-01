import axios from 'axios'
import React, { useEffect, useState } from 'react'
import Home from './Home'

function SuperAdmin({API}) {
  
    const [intitialData,updateInitialData] = useState(null)
    const [toggleUpdateBox,setToggleUpdateBox] = useState(false)
    const [currentUser,setCurrentUser] = useState(null)
    async function fetchData(){
    try {
        const response = await axios.get(API);
        updateInitialData(response.data)
    } catch (error) {
        console.log(error)
    }
    }
    function updateUser (userId){
        const selectedUser = intitialData.find((e)=>e.id===userId)
        setToggleUpdateBox(true)
        setCurrentUser(selectedUser)
        console.log("user sele",selectedUser)
    }
async function updateUserData(id,formData){
    try {
        
        await axios.put(`${API}/${id}`,formData)
    } catch (error) {
        console.log("error in user update",error)
    }
}
console.log(updateUserData)
    const userDelete = async(id) =>{
        let cnf = window.confirm("are you want to delete");
        if(!cnf) return;
        try {
            await axios.delete(`${API}/${id}`);
            fetchData();
        } catch (error) {
          console.log(error)  
        }
    }
    useEffect(()=>{
        fetchData()
    },[])
    console.log(intitialData)
  return (
    <>
    {!intitialData?(<h2>Loading...</h2>): (!toggleUpdateBox?
        (<table>
            <thead>
               <tr>
                <th>Name</th>
                <th>Email</th>
                <th>Mobile</th>
                <th>Password</th>
               </tr>
            </thead>

            <tbody>
            {intitialData.map((e,i)=>{
                return <tr key={`mykey-${i}`}>
                    <td>{e.name}</td>
                    <td>{e.email}</td>
                    <td>{e.mobile}</td>
                    <td>{e.password}</td>
                    <td><button onClick={ ()=>{
                        updateUser(e.id)
                    }
                    }>edit</button></td>
                    <td><button onClick={()=>{
                            userDelete(e.id)
                    }}>delete</button></td>
                </tr>
            })}
            </tbody>
        </table>

        ): (currentUser) && (<Home/>) )
    }
    </>
  )
}

export default SuperAdmin
