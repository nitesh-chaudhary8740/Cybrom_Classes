import React from "react";
import { Link } from "react-router-dom";
import img from "../../assets/vite.svg";
const Navbar = () => {
  return (
    <nav>
      <section>
        <div>
          <img src={img} alt="" />
        </div>
        <ul>
          <li>
            <Link to={"/"}>Home</Link>
          </li>
          <li>
            <Link to={"/dashboard"}>Dashboard</Link>
          </li>
          <li>
            <Link to={"/projects"}>Projects</Link>
          </li>
          <li>
            <Link to={"/contact"}>Contact</Link>
          </li>
        </ul>
      </section>
      <section>
        <ul>
          <li>Search</li>
        </ul>
      </section>
    </nav>
  );
};

export default Navbar;
