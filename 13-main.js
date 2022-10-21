#!/usr/bin/env node
const add = require('./13-add').add; // import the add function
const a = parseInt(process.argv[2]); // get the first argument
const b = parseInt(process.argv[3]); // get the second argument
console.log(add(a, b)); // print the result of the add function

// Path: 13-main.js
// Compare this snippet from 13-add.js:
