#!/usr/bin/env node
// A script that adds two arguments together
// they should all be integers 
// use a function with ( a , b ) as parameters
// use console.log to print the outcome

/*let number1 = process.argv[2];
let number2 = process.argv[3];

function add(a, b) {
    return a + b;
}

if (isNaN (number1) || isNaN (number2)) {
    console.log('NaN');
} else {
    console.log(add(parseInt(number1), parseInt(number2)));
} */

// Another way to do it

function add(a, b) {
    console.log(parseInt(a) + parseInt(b));
}
add(process.argv[2], process.argv[3]);