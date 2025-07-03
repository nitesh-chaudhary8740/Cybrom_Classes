 async function showMessage(message) {
  const messageDiv = document.createElement("div");
  const messageDurationBar = document.createElement("div");
  messageDurationBar.id = "message-bar-div";
  messageDiv.id = "message-div";
  const msgNode = document.createTextNode(message);
  messageDiv.appendChild(msgNode);
  messageDiv.appendChild(messageDurationBar);
  document.body.appendChild(messageDiv);
  let messageBarWidthOffset = 100;
  const reduceBarwidth = setInterval(() => {
    console.log(messageBarWidthOffset);
    messageDurationBar.style.width = `${messageBarWidthOffset}%`;
    messageBarWidthOffset--;
  }, 20);
 
  return new Promise((resolve, reject) => {
    try{
        setTimeout((e) => {
    clearInterval(reduceBarwidth);
    document.body.removeChild(messageDiv);
    resolve(true)
  }, 2000);

    }
    catch(e){
        reject(false)
    }
  })
}
export default showMessage;
