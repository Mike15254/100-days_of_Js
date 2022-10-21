#!/usr/bin/env node
// A script that computes and prints a factorial
// first argument is an integer
// factorial of NaN is 1 
// do it recursively
// you must use a function
// you must use console.log(...) to print all output

/*let number = process.argv[2];

function factorial(n) {
    if (isNaN(n)) {
        return 1;
    } else {
        n * factorial(n - 1);
    }
}

console.log(factorial(parseInt(number))); */

function factorial (n) {
    if (Number.isNaN(n) || (n === 1)) {
        return 1;
    }
    return n * factorial(n - 1);
}

console.log(factorial(parseInt(process.argv[2])));