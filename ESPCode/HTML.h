const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Kontrollpanel </title>
    <script src="https://unpkg.com/swiper@8/swiper-bundle.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/Chart.js/3.5.1/chart.min.js"></script>
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Rounded:opsz,wght,FILL,GRAD@48,700,0,200" />
    <meta name="viewport" content="width=device-width, user-scalable=no" />
</head>
<body>
    
    <div id="mainContainer">

        <div class="swiper mySwiper">
            <div class="swiper-wrapper">
                <div class="swiper-slide graphSlide">  </div>
                <div class="swiper-slide logoSlide">
                    <img src="https://scontent.xx.fbcdn.net/v/t1.15752-9/279308982_2230510993779541_6831287230799998873_n.png?stp=dst-png_p320x320&_nc_cat=108&ccb=1-7&_nc_sid=aee45a&_nc_ohc=zIHqBRSSYaQAX8Mm333&_nc_ad=z-m&_nc_cid=0&_nc_ht=scontent.xx&oh=03_AVIng6UgQ5N7wQ0OJjhzW0T9cGSI93AK7PPp-_8_nPxkVw&oe=62C84E7E" id="logoImg">
                </div>
            </div>
        </div>

        <div class="outerButtonContainer">
            <div class="buttonContainerAction">
                <div class="btn actionBtn"><div class="btn0"></div></div>
                <div class="btn actionBtn"><div class="btn1"></div></div>
                <div class="btn actionBtn"><div class="btn2"></div></div>
            </div>
            <div class="buttonContainerDrive">
                <div class="btn driveBtn">
                    <div class="btn3">
                        <span class="material-symbols-rounded md-60 btn3">
                            north_west
                        </span>
                    </div>
                </div>
                <div class="btn driveBtn">
                    <div class="btn4">
                        <span class="material-symbols-rounded md-60 btn4">
                            arrow_upward
                        </span>
                    </div>
                </div>
                <div class="btn driveBtn">
                    <div class="btn5">
                        <span class="material-symbols-rounded md-60 btn5">
                            north_east
                        </span>
                    </div>
                </div>
            </div>
            <div class="buttonContainerDrive">
                <div class="btn driveBtn">
                    <div class="btn6">
                        <span class="material-symbols-rounded md-60 btn6">
                            arrow_back
                        </span>
                    </div>
                </div>
                <div class="btn driveBtn">
                    <div class="btn7">
                        <span class="material-symbols-rounded md-60 btn7">
                            arrow_downward
                        </span>
                    </div>
                </div>
                <div class="btn driveBtn">
                    <div class="btn8">
                        <span class="material-symbols-rounded md-60 btn8">
                            arrow_forward
                        </span>
                    </div>  
                </div>
            </div>
        </div>

    </div>

</body>

<style>
    
    * {
        user-select: none; 
        -webkit-user-select: none; 
        -khtml-user-select: none;
        -moz-user-select: none; 
        -ms-user-select: none;
        touch-action: none;
        -webkit-touch-action: none;
    }

    html, body {
        margin: 0px;
        padding: 0px;
        overflow: hidden;
        background-color: #EEEEEE;
        position: fixed;
        top: 0;
        bottom: 0;
        right: 0;
        left: 0;
    }

    .material-symbols-rounded {
        font-variation-settings:
        'FILL' 0,
        'wght' 700,
        'GRAD' 0,
        'opsz' 48;
        filter: brightness(0) invert(1);
    }

    #mainContainer {
        width: 100vw;
        height: 100vh;
        height: calc(var(--vh, 1vh) * 100);   
        display: flex;
        flex-flow: column nowrap;
        align-content: center;
        justify-content: space-between;
        box-sizing: border-box;
        overflow: hidden;
    }

    .swiper {
        width: 100%;
        height: 57vh;
        box-sizing: border-box;
        display: flex;
        padding: 4%;
    }

    .swiper-wrapper {
        box-sizing: border-box;
        flex-grow: 1;
        display: flex;
    }

    .swiper-slide {
        flex-grow: 1;
        display: flex;
    }

    .graphSlide {
        background-color: #E5E5E5;
        border-radius: 10px;
    }

    .logoSlide {
        align-items: center;
        justify-content: center;
        align-content: center;
    }

    #logoImg {
        width: 30%;
        height: auto;
    }

    .outerButtonContainer {
        flex-grow: 1;
        display: flex;
        flex-flow: column nowrap;
        align-content: flex-end;
        max-height: 50vh;
        padding: 0% 4% 4% 4%;
    }

    .buttonContainerAction {
        display: flex;
        flex-flow: row nowrap;
        justify-content: space-evenly;
        align-items: stretch;
    }

    .buttonContainerDrive {
        display: flex;
        flex-wrap: wrap;
        justify-content: space-between;
        flex-grow: 1;
    }

    .buttonContainerAction {
        height: 16%;
    }

    .actionBtn, .driveBtn {
        display: flex;
        flex-grow: 1;
        padding: 1%;
    }

    
    .actionBtn div, .driveBtn div {
        flex-grow: 1;
        display: flex;
        justify-content: center;
        align-items: center;
        align-content: center;
        background-color:#0A2237;
        border-radius: 10px;
    }
    
    .driveBtn div {
        width: 32%;
    }



</style>

<script>

    var swiper = new Swiper(".mySwiper", {});
    
    var gateway = `ws://${window.location.hostname}/ws`;
    var websocket;

    let vh = window.innerHeight * 0.01;
    document.documentElement.style.setProperty('--vh', `${vh}px`);

    window.addEventListener('load', onLoad);

    var buttons = document.getElementsByClassName("btn");
    
    function initWebSocket() {
        console.log('Trying to open a WebSocket connection...');
        websocket = new WebSocket(gateway);
        websocket.onopen    = onOpen;
        websocket.onclose   = onClose;
        websocket.onmessage = onMessage; // <-- add this line
    }

    function onOpen(event) {
        console.log('Connection opened');
    }

    function onClose(event) {
        console.log('Connection closed');
        setTimeout(initWebSocket, 2000);
    }

    function onMessage(event) {
        console.log(event.data);
    }

    function onLoad(event) {
        initWebSocket();

        for(btn of buttons) {
            btn.addEventListener('touchstart', handleTouchDown);
            btn.addEventListener('touchend', handleTouchUp);   
        }

        document.addEventListener("keydown", handleKeyDown);
        document.addEventListener("keyup", handleKeyUp);
    }

    function handleTouchDown(event) {
        btnClass = event.srcElement.className.split(" ");
        btn = btnClass[btnClass.length-1];
        console.log(btn);
        switch (btn) {
            case "btn0":
                websocket.send('D');
                break;

            case "btn4":
                websocket.send('K')
                break;

            default:
                break;
        }
    }

    function handleTouchUp(event) {
        btnClass = event.srcElement.className.split(" ");
        btn = btnClass[btnClass.length-1];
        websocket.send('S');
    }

    function handleKeyDown(event) {
        btn = event.keyCode;

        switch (btn) {
            case 49:
                websocket.send('D');
                break;

            case 87:
                websocket.send('K')
                break;

            default:
                break;
        }
    }

    function handleKeyUp(event) {
        btn = event.keyCode;
        websocket.send('S');
    }
    
</script>

</html>
)rawliteral";
