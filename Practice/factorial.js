#!/usr/bin/node

// A recursive function that's prints the factorial of a number
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });



function factorial(X) {
    if (X === 0) {
        return 1;
    } else {
        return X * factorial(X - 1);
    }
}

readline.question(' Input a number ', num => {
    if (num > 0) {
        let result = factorial(num)
        console.log(`The factorial of ${num} is ${result}`);
}
    readline.close();
});

