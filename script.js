let expression = "";

const display = document.getElementById("display");
const historyDisplay = document.getElementById("history");



// DISPLAY


function updateDisplay() {

    if (expression === "") {
        display.innerText = "0";
    } else {
        display.innerText = expression;
    }
}


// ADD VALUE

function appendValue(value) {

    expression += value;

    updateDisplay();
}



// CLEAR


function clearDisplay() {

    expression = "";

    historyDisplay.innerText = "";

    updateDisplay();
}



// DELETE


function deleteLast() {

    expression = expression.slice(0, -1);

    updateDisplay();
}


// BASIC CALCULATION

function calculate() {

    if (expression === "") {
        return;
    }

    try {

        let result = eval(expression);

        historyDisplay.innerText = expression + " =";

        expression = String(result);

        updateDisplay();

    } catch (error) {

        display.innerText = "Error";

    }
}



// SCIENTIFIC FUNCTIONS
function calculateFunction(type) {

    let number = parseFloat(expression);

    if (isNaN(number)) {

        display.innerText = "Enter number";

        return;
    }


    let result;


    switch (type) {

        case "square":

            result = number * number;

            break;


        case "cube":

            result = number * number * number;

            break;


        case "sqrt":

            if (number < 0) {

                display.innerText = "Error";

                return;
            }

            result = Math.sqrt(number);

            break;


        case "sin":

            result = Math.sin(number * Math.PI / 180);

            break;


        case "cos":

            result = Math.cos(number * Math.PI / 180);

            break;


        case "tan":

            result = Math.tan(number * Math.PI / 180);

            break;


        case "log":

            if (number <= 0) {

                display.innerText = "Error";

                return;
            }

            result = Math.log10(number);

            break;


        case "ln":

            if (number <= 0) {

                display.innerText = "Error";

                return;
            }

            result = Math.log(number);

            break;


        case "abs":

            result = Math.abs(number);

            break;


        default:

            return;
    }


    historyDisplay.innerText =
        type + "(" + number + ")";


    expression = String(result);

    updateDisplay();
}



// DARK / LIGHT MODE


const themeButton = document.getElementById("themeBtn");

themeButton.addEventListener("click", function () {

    document.body.classList.toggle("light");

});