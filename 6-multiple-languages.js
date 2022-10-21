#!/usr/bin/env node

// A script that prints 3 statments but using an array of string and a loop
// Do not use if/else statment
// Do not use var
// you must use console.log and (while,for e.t.s)
 
let msg = ['C is fun', 'Python is cool', 'Javascript is amazing'];
/*
for (let i = 0; i < 3 ; i ++) {
    console.log(msg[i]);
} */
let i = 0;
while (i < 3) {
    console.log(msg[i]);
    i++;
}