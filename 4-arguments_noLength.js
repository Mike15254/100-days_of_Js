#!/usr/bin/env node

// A script that shows arguments without using lenght
// You not allowed to use var
// if no argument print No argument
// if only one argument pring Argument found
// if more that one argument print Arguments found
// use console.log to print all output

if (process.argv[2] === undefined ){
    console.log('No argumnet');
} else {
    console.log(process.argv[2]);
}