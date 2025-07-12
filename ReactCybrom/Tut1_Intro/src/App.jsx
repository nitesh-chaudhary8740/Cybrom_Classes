// import { useState } from 'react'


function App() {
const arr = [1,3,43,54];
  return (
    <>
  {
    arr.map((e,i)=>{
      return <h2 key={i}>{e}</h2>
    })
  }
    </>
  )
}

export default App

