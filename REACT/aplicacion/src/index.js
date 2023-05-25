import React from "react";
import ReactDOM  from "react-dom/client";

const root = ReactDOM.createRoot(document.getElementById('root'));
function Greetings() {
  const user = {
      name : "Luis",
      lastName : "Flores"
  }
  return <div>
        <h1>{user.name}</h1>
    </div>
}
root.render(
  <div>
    <Greetings></Greetings>
    <Greetings></Greetings>
  </div>
);
