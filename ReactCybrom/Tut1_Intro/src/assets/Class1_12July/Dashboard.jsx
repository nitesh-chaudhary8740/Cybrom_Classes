import React from 'react'
import { useLocation } from 'react-router-dom'
function Dashboard() {
    const location = useLocation();
    const formData = location.state
  return (
    <div>
      <h1>THis is Dashboard</h1>
      <h1>{formData.name}</h1>
    </div>
  )
}

export default Dashboard
