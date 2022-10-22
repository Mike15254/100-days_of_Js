#!/usr/bin/env node
// A script that prints a square
// First argument is the size of the square
// if Argument is missing or cannot be coverted to int print "Missing size"
// You must us character X to print the square
// you must use a loop (while, for, etc.)

/* let number = process.argv[2];
if (isNaN(number)) {
    console.log('Missing size');
} else {
    for (let i = 0; i < number; i++) {
        console.log('X'.repeat(number));
    }
} */ 

let size = process.argv[2];

if (isNaN(size)) {
    console.log('Missing size');
} else {
    for (let i = 0 , s ; i < size ; i++) {
        s = '';
        for (let j = 0 ; j < size ; j++) {
            s += 'X';
        }
        console.log(s);
    }
}