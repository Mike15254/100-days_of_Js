#!/usr/bin/env node
// A script that prints My number < first argumnet converted to integer>
// If first cannot be converted print "Not a number"
// You must use console.log(...) to print all output
// You are not allowed to use var or try/catch

let myArg = process.argv[2];
if (isNaN(myArg)) {
    console.log('Not a number');
} else {
    console.log('My number: ' + myArg);
}
