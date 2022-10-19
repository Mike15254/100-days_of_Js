#!/usr/bin/env node

// A script that if there are no arguments, print No argument
// If there is one argument, print Argument found
// If there are more than one argument, print Arguments found
// otherwise, print No argument
// you must use console.log(...) to print all output
// you are not allowed to use var

if (process.argv.length === 2) {
    console.log("No arguments");
} else if (process.argv.length === 3) {
    console.log("Only one argument found");
} else {
    console.log("Arguments found");
}
