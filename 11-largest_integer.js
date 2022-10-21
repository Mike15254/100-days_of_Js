#!/usr/bin/env node

// A script that searches the second biggest integer in the list of arguments
// Assume all argumnets are converted to an integer
// If no argumnents passed print 0 
// if the argument is 1 print 0
// use console.log to print the outcome

/*
let number = process.argv[2];
let number2 = process.argv[3];

function largestInteger(a, b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
} 

if (isNaN(number) || isNaN(number2)) {
    console.log('0');
}

if (number === 1) {
    console.log('0');
}

console.log(largestInteger(parseInt(number), parseInt(number2)));
*/

// Some other way to do it

let biggest = 0;
let i;
const arrayNumbers = [];

for (i = 2; i < process.argv.length; i++) {
  if (Number.isNaN(parseInt(process.argv[i])) === false) {
    arrayNumbers[i - 2] = parseInt(process.argv[i]);
  }
}

if (arrayNumbers.length > 1) {
  biggest = Math.max.apply(null, arrayNumbers);
  i = arrayNumbers.indexOf(biggest);
  arrayNumbers[i] = -Infinity;
  biggest = Math.max.apply(null, arrayNumbers);
}

console.log(biggest);
