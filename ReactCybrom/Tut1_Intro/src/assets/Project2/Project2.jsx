import React, { useRef } from 'react';

function Project2() {
  const myRef = useRef([]);
  const color = ["green", "blue", "red", "yellow"];

  function setColor(index) {
    // Now, myRef.current[index] is the actual DOM button element!
    console.log(myRef.current[index]);
    myRef.current[index].style.backgroundColor = color[index];
  }

  return (
    <div>
      {color.map((element, index) => (
        <button
          onClick={() => {
            setColor(index);
          }}
          key={index}
          // The ref prop is the key! This is where you store the DOM element.
          // The callback function receives the DOM element (el) and assigns it to your ref array.
          ref={el => (myRef.current[index] = el)}
        >
          {element}
        </button>
      ))}
    </div>
  );
}

export default Project2;