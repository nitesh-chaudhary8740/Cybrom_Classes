import React, { useState } from 'react'
import "../mycss/mystyle.css"
import axios from "axios"
import { useNavigate } from 'react-router-dom';

function Home() {
  const navigate = useNavigate()
const API = "http://localhost:4000/user";
  const[formData,setFormData]=useState(
    {
    name:"",
    email:"",
    mobile:"",
    password:""
  }
  
)
async function handleSubmit(e){
  e.preventDefault()
  if (!formData?.name || !formData.email || !formData?.mobile ||!formData?.password){
    alert("fill all fileds")
    return;
  }
  try {
    await axios.post(API,formData)
    navigate("/dashboard",{state:formData})
    setFormData( {
    name:"",
    email:"",
    mobile:"",
    password:""
  })
  } catch (error) {
    console.log(error)
  }
}
  function handleChange(e){
    console.log(e.target)
    const {name,value} =e.target; 
    console.log(name)
    setFormData((prev)=>({
      ...prev,
      [name]:value
    }))
  }
  return (
    <div>
      <span> <b>Name: </b>-{formData.name}</span><br />
      <span> <b>Email: </b>-{formData.email}</span><br />
      <span> <b>Mobile: </b>-{formData?.mobile||"this is undefined"}</span><br />
      <span> <b>Password: </b>-{formData.password}</span><br />
  
  
      <form action="" onSubmit={handleSubmit}>
        <fieldset>
          <legend>My form</legend>
          <input type="text" name='name'  value={formData.name} placeholder="Name" onChange={handleChange} /> <br /><br />
          <input type="text" name='email'  value={formData.email} placeholder="Email" onChange={handleChange} /> <br /><br />
          <input type="text" name='mobile'  value={formData.mobile} placeholder="Mobile" onChange={handleChange} /> <br /><br />
          <input type="text" name='password'  value={formData.password} placeholder="Password" onChange={handleChange} /> <br /><br />
          <input type='submit' value={"SUBMIT"}/>
        </fieldset>
      </form>
    </div>
  )
}

export default Home
