#!/usr/bin/node

// A programm that prints the collatz sequence


function collatz(number) {
    if (number % 2 == 0){
        print(number / 2);
        return (number / 2);
    } else if(number % 2 == 1){
        result = 3 * number + 1;
        print(result);
        return result;
    }
}
const input = prompt("What's your name?");


while (n != 1) {
    n = collatz(isNaN(n));
}
