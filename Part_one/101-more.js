#!/usr/bin/env node
// A function that executes X times function
// Prototype: function (X, theFunction)
// Don't use var

exports.callMeMoby = function (X, theFunction) {
    while (X>0) {
        theFunction();
        X--;
    }
}