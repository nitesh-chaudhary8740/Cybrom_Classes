import About from "./assets/Class1_12July/About"
import Contact from "./assets/Class1_12July/Contact"
import Navbar from "./assets/Class1_12July/Navbar"
import Service from "./assets/Class1_12July/Service"
import Home from "./assets/Class1_12July/Home"

import {BrowserRouter as Router, Routes,Route} from "react-router-dom"
import Dashboard from "./assets/Class1_12July/Dashboard"
function App() {

  return (
    <>
    <Router>
    <Navbar/>
    <Routes>
      <Route path="/" element={<Home name={"hello"} />}/>
      <Route path="/about" element={<About/>} />
      <Route path="/services" element= {<Service/>}/>
      <Route path="/contact" element= {<Contact/>} />
      <Route path="/dashboard" element= {<Dashboard/>} />
    </Routes>
    </Router>
   
    </>
  )
}

export default App

