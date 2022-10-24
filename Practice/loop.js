#!/usr/bin/node

let average = process.argv[2];
average = 50;
console.log ('Input the average');

if (average === 70 && average <= 100) {
    console.log('First Class');
} else if (average === 60 && average <= 69) {
    console.log('Second class');
} else if (average === 50 && average <= 59) {
    console.log('pass');
} else {
    console.log('Fail');
}