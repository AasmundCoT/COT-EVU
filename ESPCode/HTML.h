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
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, shrink-to-fit=no" />
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;500&display=swap" rel="stylesheet">
</head>
<body>
    
    <div id="mainContainer">

        <div class="swiper mySwiper">
            <div class="swiper-wrapper">
                <div class="swiper-slide graphSlide">
                    <div class="chartLabels">
                        <div class="chartLabel">
                            <div class="labelTickBox tick0" onclick="toggleGraph(0)"></div>
                            <input class="graphName name0" placeholder="Graf 1" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                        </div>
                        <div class="chartLabel">
                            <div class="labelTickBox tick1" onclick="toggleGraph(1)"></div>
                            <input class="graphName name1" placeholder="Graf 2" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                        </div>
                        <div class="chartLabel">
                            <div class="labelTickBox tick2" onclick="toggleGraph(2)"></div>
                            <input class="graphName name2" placeholder="Graf 3" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                        </div>
                    </div>
                    <div class="chartContainer">
                        <canvas id="chart"></canvas>
                    </div>
                </div>
                <div class="swiper-slide logoSlide">
                    <img src="https://scontent.xx.fbcdn.net/v/t1.15752-9/279308982_2230510993779541_6831287230799998873_n.png?stp=dst-png_p320x320&_nc_cat=108&ccb=1-7&_nc_sid=aee45a&_nc_ohc=zIHqBRSSYaQAX8Mm333&_nc_ad=z-m&_nc_cid=0&_nc_ht=scontent.xx&oh=03_AVIng6UgQ5N7wQ0OJjhzW0T9cGSI93AK7PPp-_8_nPxkVw&oe=62C84E7E" id="logoImg">
                </div>
            </div>
        </div>

        <div class="outerButtonContainer">
            <div class="buttonContainerAction">
                <div class="btn actionBtn Digit1">
                    <span class="material-symbols-rounded toggleBtn0 toggle Digit1">
                        mode_of_travel
                    </span>
                </div>
                <div class="btn actionBtn Digit2">
                    <span class="material-symbols-rounded toggleBtn1 toggle Digit2">
                        radio_button_unchecked
                    </span>
                </div>
                <div class="btn actionBtn Digit3">
                    <span class="material-symbols-rounded toggleBtn2 toggle Digit3">
                        check_box_outline_blank
                    </span>
                </div>
            </div>
            <div class="buttonContainerDrive">
                <div class="btn driveBtn KeyQ">
                    <span class="material-symbols-rounded arrow KeyQ">
                        north_west
                    </span>
                </div>
                <div class="btn driveBtn KeyW">
                    <span class="material-symbols-rounded arrow KeyW">
                        arrow_upward
                    </span>
                </div>
                <div class="btn driveBtn KeyE">
                    <span class="material-symbols-rounded arrow KeyE">
                        north_east
                    </span>
                </div>
            </div>
            <div class="buttonContainerDrive">
                <div class="btn driveBtn KeyA">
                    <span class="material-symbols-rounded arrow KeyA">
                        arrow_back
                    </span>
                </div>
                <div class="btn driveBtn KeyS">
                    <span class="material-symbols-rounded arrow KeyS">
                        arrow_downward
                    </span>
                </div>
                <div class="btn driveBtn KeyD">
                    <span class="material-symbols-rounded arrow KeyD">
                        arrow_forward
                    </span>
                </div>
            </div>
            <div class="logoLandscape">
                <img src="https://scontent.xx.fbcdn.net/v/t1.15752-9/287475464_5393866834011744_7750182609549846323_n.png?stp=dst-png_s2048x2048&_nc_cat=111&ccb=1-7&_nc_sid=aee45a&_nc_ohc=T4UsxyIAyvgAX-D6rYO&_nc_ad=z-m&_nc_cid=0&_nc_ht=scontent.xx&oh=03_AVIdJLxgDaXqhCY8RmvM0ZOqMu1pkusnfbaT3Xq9ZLUDNw&oe=62CA6E1D" id="logoLandscapeImg">
            </div>
        </div>

    </div>

</body>

<style>

    html, body {
        margin: 0px;
        padding: 0px;
        overflow: scroll;
        background-color: #EEEEEE;
        position: fixed;
        top: 0;
        bottom: 0;
        right: 0;
        left: 0;
        touch-action: manipulation;
        -webkit-user-select: none;
        -khtml-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
    }

    .material-symbols-rounded {
        font-variation-settings:
        'FILL' 0,
        'wght' 700,
        'GRAD' 0,
        'opsz' 48;
        display: flex;
        justify-content: center;
        align-items: center;
        border-radius: 10px;
        filter: brightness(0) invert(1);
        transform: scale(1.5);
    }

    #mainContainer {   
        display: flex;
        align-content: center;
        justify-content: space-between;
        box-sizing: border-box;
        overflow: hidden;
        width: 100vw;
        height: 100vh;
        height: calc(var(--vh, 1vh) * 100);
    }

    .swiper {
        box-sizing: border-box;
        display: flex;
    }

    .swiper-wrapper {
        box-sizing: border-box;
        display: flex;
    }

    .swiper-slide {
        display: flex;
    }

    .graphSlide {
        background-color: #E5E5E5;
        border-radius: 10px;
        display: flex;
        position: relative;
        flex-flow: column nowrap;
    }

    .labelTickBox {
        cursor: pointer;
        border-radius: 5px;
        margin-right: 2%;
    }

    .chartLabels {
        min-height: 10%;
        padding: 5% 5% 0 5%;
        display: flex;
        align-items: center;
        flex-flow: row nowrap;
        justify-content: space-between;
    }

    .chartLabel {
        display: flex;
        flex-flow: row nowrap;
        align-items: center;
    }

    .tick0 {
        background-color: transparent;
        border: 3px solid #F8C9B5;
    }

    .tick1 {
        background-color: transparent;
        border: 3px solid #189EFF;
    }

    .tick2 {
        background-color: transparent;
        border: 3px solid #42D9C8;
    }

    .name0 {
        color: #F8C9B5;
    }

    .name1 {
        color: #189EFF;
    }

    .name2 {
        color: #42D9C8;
    }

    ::placeholder { /* Chrome, Firefox, Opera, Safari 10.1+ */
        color: rgb(56, 56, 56, 0.3);
        opacity: 1; /* Firefox */
    }

    :-ms-input-placeholder { /* Internet Explorer 10-11 */
        color: rgb(56, 56, 56, 0.3);
    }1

    ::-ms-input-placeholder { /* Microsoft Edge */
        color: rgb(56, 56, 56, 0.3);
    }

    input {
        background-color: transparent;
        border: none;
        text-decoration: none;
        outline: none;
        width: 10%;
        font-family: 'Roboto', sans-serif;
        font-weight: bolder;
        -webkit-user-select: initial;
        -khtml-user-select: initial;
        -moz-user-select: initial;
        -ms-user-select: initial;
        user-select: initial;
    }

    .chartContainer {
        display: flex;
        justify-content: center;
        align-items: center;
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
        margin: 3%;
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
        min-height: 20%;
    }
    
    .btn {
        flex-grow: 1;
        display: flex;
        justify-content: center;
        align-items: center;
        align-content: center;
        background-color:#0A2237;
        border-radius: 10px;
        margin: 1%;
        border: none;
        cursor: pointer;
        min-width: 31%;
        overflow: hidden;
    }

    .actionBtn {
        min-height: 30%;
    }

    .logoLandscape {
        display: flex;
        justify-content: flex-start;
        align-items: center;
    }

    #logoLandscapeImg {
        height: auto;
        width: 100%;
    }

    @media screen and (orientation: portrait) {
        #mainContainer {
            flex-flow: column nowrap;
        }

        .swiper {
            width: 100vw;
            height: 57vh;
            padding: 4% 4% 0 4%;
            flex-basis: 57vh;
        }
        
        .logoSlide { visibility: visible; width: auto; }
        .logoLandscape { visibility: hidden; height: 0; padding: 0; }
        .toggle { transform: scale(1); }

    }
    
    @media screen and (orientation: landscape) {
        #mainContainer {
            flex-flow: row nowrap;
        }

        .swiper {
            width: 57vw;
            height: 100vh;
            height: calc(var(--vh, 1vh) * 100);
            padding: 3% 0 3% 3%;
        }

        .logoSlide { visibility: hidden; width: 0;}
        .logoLandscape { visibility: visible; height: auto; padding: 3%;}
        .toggle { transform: scale(1.5); }

        @media screen and (pointer: fine) and (min-device-width: 500px) {

            body {
                display: flex;
                justify-content: center;
                align-items: center;
            }

            #mainContainer {
                width: 70vw;
                height: 60vh;
                height: calc(var(--vh, 1vh) * 60);
            }

            .swiper {
                width: 40vw;
                height: 60vh;
                height: calc(var(--vh, 1vh) * 60);
            }

        }

    }

</style>

<script>

    var swiper = new Swiper(".mySwiper", {});
    
    var gateway = `ws://${window.location.hostname}/ws`;
    var websocket, ctx;

    var isMobile = window.matchMedia("(pointer:coarse)").matches;

    var graphContainer = document.getElementsByClassName("graphSlide")[0];
    var chartLabels = document.getElementsByClassName("chartLabels")[0];
    var labelTickBoxes = document.getElementsByClassName("labelTickBox");
    var graphNames = document.getElementsByClassName("graphName");
    var graph = document.getElementById("chart");
    var ctx = graph.getContext('2d');

    var keyToggle = true;
    var buttonToggle = [false, false, false];
    var graphToggle = [false, false, false];
    var graphColors = ["#F8C9B5", "#189EFF", "#42D9C8"];
    var fontSize = 10;

    var dataPoints = 200;

    //var graphData = [[0,0,0,0,0,0,0,0,0,0],[1,3,2,4,3,5,4,6,5,7],[1,1,2,3,5,8,13,21,34,25]]; //test
    var graphData = [[],[],[]]

    for(let i = 0; i<3; i++) {
        for(let j = 0; j<dataPoints; j++) {
            graphData[i].push(0);
        }
    }

    setInterval(updateView, 100);
    window.addEventListener('load', onLoad);

    function updateView() {
        let vh = window.innerHeight * 0.01;
        document.documentElement.style.setProperty('--vh', `${vh}px`);

        var graphContainerWidth = graphContainer.offsetWidth;
        var graphContainerHeight = graphContainer.offsetHeight;
        var chartLabelsHeight = chartLabels.offsetHeight;

        graph.style.width = `${graphContainerWidth}px`;
        graph.style.height = `${0.95*graphContainerHeight-chartLabelsHeight}px`;

        graph.width = `${graphContainerWidth}`;
        graph.height = `${0.95*graphContainerHeight-chartLabelsHeight}`;

        fontSize = 0.26*chartLabelsHeight;

        updateGraph();

        for(tickBox of labelTickBoxes) {
            tickBox.style.minHeight = `${0.3*chartLabelsHeight}px`;
            tickBox.style.minWidth = `${0.3*chartLabelsHeight}px`;
        }

        for(graphName of graphNames) {
            graphName.style.fontSize = `${0.26*chartLabelsHeight}px`;
            graphName.style.width = `${0.18*graphContainerWidth}px`;
        }

        if(window.innerHeight > window.innerWidth) {
            swiper.enable();
        } else {
            swiper.disable();
            swiper.activeIndex = 0;
        }

    }

    function updateGraph() {

        ctx.clearRect(0,0,graph.width,graph.height);

        var canvasWidth = 0.01*graph.offsetWidth;
        var canvasHeight = 0.01*graph.offsetHeight;

        var graphTop = 5*canvasHeight;
        var graphBottom = 95*canvasHeight;
        var graphLeft = 10*canvasWidth;
        var graphRight = 90*canvasWidth;

        var activeData = [];
        var activeDataPos = [];
        var dataIntervalX = (graphRight-(graphLeft+canvasWidth))/dataPoints;
        var dataIntervalY;
        var activeGraphColors = [];
        var dataTop = 0;
        var dataBottom = 0;
        
        for(let i = 0; i<3; i++) {
            if(graphToggle[i]) {
                activeData.push(graphData[i]);
                activeDataPos.push([]);
                activeGraphColors.push(graphColors[i]);
            }
        }

        ctx.roundRect(graphLeft,graphTop+canvasWidth,graphRight-graphLeft,0.5*canvasWidth,10);
        ctx.fillStyle = 'rgb(61,61,61,0.05)';
        ctx.fill();

        // ctx.roundRect(graphLeft+1.5*canvasWidth,(graphBottom-graphTop)/2+2.4*canvasWidth,graphRight-graphLeft-1.5*canvasWidth,0.5*canvasWidth,10);
        // ctx.fillStyle = 'rgb(61,61,61,0.05)';
        // ctx.fill();

        if(activeData.length) {

            var maxRow = activeData.map(function(row){ return Math.max.apply(Math, row); });
            dataTop = Math.max.apply(null, maxRow);

            var minRow = activeData.map(function(row){ return Math.min.apply(Math, row); });
            dataBottom = Math.min.apply(null, minRow);

            if(dataTop-dataBottom) {
                dataIntervalY = ((graphBottom-graphTop-2.7*canvasWidth)/(dataTop-dataBottom));
            } else {
                dataIntervalY = 0;
            }

            if(dataBottom<0&&dataTop>0) {
                ctx.roundRect(graphLeft+1.5*canvasWidth,graphBottom-dataIntervalY*Math.abs(dataBottom)-1.5*canvasWidth-1.5,graphRight-graphLeft-1.5*canvasWidth,0.5*canvasWidth,10);
                ctx.fillStyle = 'rgb(61,61,61,0.3)';
                ctx.fill();
            }

            for(let i = 0; i<activeData.length; i++) {
                for(let j = 0; j<dataPoints; j++) {
                    activeDataPos[i].push([j*dataIntervalX+graphLeft+1.5*canvasWidth,
                    graphBottom-(activeData[i][j]-dataBottom)*dataIntervalY-1.5*canvasWidth]);
                }
            }

            for(let i = 0; i<activeData.length; i++) {
                for(let j = 0; j<(activeDataPos[i].length-1); j++) {
                    ctx.beginPath();
                    ctx.moveTo(activeDataPos[i][j][0],activeDataPos[i][j][1]);
                    ctx.lineTo(activeDataPos[i][j+1][0],activeDataPos[i][j+1][1]);
                    ctx.lineWidth = 3;
                    ctx.strokeStyle = activeGraphColors[i];
                    ctx.stroke();
                }
            }

            ctx.fillStyle = 'black';

            if(dataTop-dataBottom) {
                ctx.font = `${fontSize}px Roboto`;
                ctx.textAlign = "right";
                ctx.fillText(dataTop, graphLeft-canvasWidth, graphTop+0.75*canvasWidth+fontSize/2);
            }

            ctx.font = `${fontSize}px Roboto`;
            ctx.textAlign = "right";
            ctx.fillText(dataBottom, graphLeft-canvasWidth, graphBottom-0.75*canvasWidth+fontSize/4);

        }

        ctx.roundRect(graphLeft+canvasWidth,graphTop,0.5*canvasWidth,graphBottom-graphTop,10);
        ctx.fillStyle = 'black';
        ctx.fill();

        ctx.roundRect(graphLeft,graphBottom-1.5*canvasWidth,graphRight-graphLeft,0.5*canvasWidth,10);
        ctx.fillStyle = 'black';
        ctx.fill();

        ctx.roundRect(graphLeft,graphTop+canvasWidth,2*canvasWidth+0.5*canvasWidth,0.5*canvasWidth,10);
        ctx.fillStyle = 'black';
        ctx.fill();

    }

    //hentet fra: https://codepen.io/simon-wu/pen/ExgLEXQ
    CanvasRenderingContext2D.prototype.roundRect = function (x, y, width, height, radius) {
        if (width < 2 * radius) radius = width / 2;
        if (height < 2 * radius) radius = height / 2;
        this.beginPath();
        this.moveTo(x + radius, y);
        this.arcTo(x + width, y, x + width, y + height, radius);
        this.arcTo(x + width, y + height, x, y + height, radius);
        this.arcTo(x, y + height, x, y, radius);
        this.arcTo(x, y, x + width, y, radius);
        this.closePath();
        return this;
    }

    function updateData(newData) {
        var index = parseInt(newData.charAt(0))-1;
        var data = parseFloat(newData.substring(1));
        graphData[index].shift();
        graphData[index].push(data);
    }  

    function toggleKeys() {
        keyToggle = !keyToggle;
    }

    function toggleGraph(index) {
        if(graphToggle[index]) {
            labelTickBoxes[index].style.backgroundColor = "transparent";
        } else {
            labelTickBoxes[index].style.backgroundColor = graphColors[index];
        }

        graphToggle[index] = !graphToggle[index];
    }

    var buttons = document.getElementsByClassName("btn");
    
    function initWebSocket() {
        console.log('Trying to open a WebSocket connection...');
        websocket = new WebSocket(gateway);
        websocket.onopen    = onOpen;
        websocket.onclose   = onClose;
        websocket.onmessage = onMessage;
    }

    function onOpen(event) {
        console.log('Connection opened');
    }

    function onClose(event) {
        console.log('Connection closed');
        setTimeout(initWebSocket, 2000);
    }

    function onMessage(event) {
        updateData(event.data);
    }

    function onLoad(event) {
        
        for(btn of buttons) {
            btn.addEventListener('touchstart', handleTouchDown);
            btn.addEventListener('touchend', handleTouchUp);  
            if(!isMobile) {
                btn.addEventListener('mousedown', handleTouchDown);
                btn.addEventListener('mouseup', handleTouchUp);
            } 
        }
        
        window.addEventListener('keydown', handleKeyDown);
        window.addEventListener('keyup', handleKeyUp);

        initWebSocket();
    }

    function handleTouchDown(event) {
        btnClass = event.srcElement.className.split(" ");
        btn = btnClass[btnClass.length-1];

        handleButtonDown(btn);
    }

    function handleKeyDown(event) {
        if(!keyToggle) return;
        btn = event.code;
        handleButtonDown(btn);
    }

    function handleButtonDown(btn) {

        document.getElementsByClassName(btn)[0].style.transform = "scale(0.95)";

        switch (btn) {
            case "Digit1":
                
                break;

            case "Digit2":
                
                break;
                
            case "Digit3":
                
                break;

            case "KeyQ":
                websocket.send('q')
                break;

            case "KeyW":
                websocket.send('w')
                break;

            case "KeyE":
                websocket.send('e')
                break;

            case "KeyA":
                websocket.send('a')
                break;

            case "KeyS":
                websocket.send('s')
                break;

            case "KeyD":
                websocket.send('d')
                break;

            default:
                break;
        }

    }

    function handleTouchUp(event) {
        btnClass = event.srcElement.className.split(" ");
        btn = btnClass[btnClass.length-1];

        handleButtonUp(btn);
    }

    function handleKeyUp(event) {
        if(!keyToggle) return;
        btn = event.code;
        handleButtonUp(btn);
    }

    function handleButtonUp(btn) {

        document.getElementsByClassName(btn)[0].style.transform = "scale(1)";

        switch (btn) {
            case "Digit1":
                if(buttonToggle[0]) {
                    document.getElementsByClassName("toggleBtn0")[0].innerHTML = "mode_of_travel";
                    websocket.send('F');
                } else {                
                    document.getElementsByClassName("toggleBtn0")[0].innerHTML = "open_with";
                    websocket.send('f');
                }
                buttonToggle[0] = !buttonToggle[0];
                break;

            case "Digit2":
                if(buttonToggle[1]) {
                    document.getElementsByClassName("toggleBtn1")[0].innerHTML = "radio_button_unchecked";
                    websocket.send('G');
                } else {                
                    document.getElementsByClassName("toggleBtn1")[0].innerHTML = "radio_button_checked";
                    websocket.send('g');
                }
                buttonToggle[1] = !buttonToggle[1];
                break;
                
            case "Digit3":
                if(buttonToggle[2]) {
                    document.getElementsByClassName("toggleBtn2")[0].innerHTML = "check_box_outline_blank";
                    websocket.send('H');
                } else {                
                    document.getElementsByClassName("toggleBtn2")[0].innerHTML = "check_box";
                    websocket.send('h');
                }
                buttonToggle[2] = !buttonToggle[2];
                break;

            case "KeyQ":
                websocket.send('Q')
                break;

            case "KeyW":
                websocket.send('W')
                break;

            case "KeyE":
                websocket.send('E')
                break;

            case "KeyA":
                websocket.send('A')
                break;

            case "KeyS":
                websocket.send('S')
                break;

            case "KeyD":
                websocket.send('D')
                break;

            default:
                break;
        }

    }
    
</script>

</html>
)rawliteral";
