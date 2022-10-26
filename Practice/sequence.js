#!/usr/bin/node

// A function that given a number it tries to find a sequence 
// of such additions and multiplication that produce the number

// Hint : By starting from 1 and repetedly adding 5 or multiplying by 3
// an infifnite set of numbers can be produced

// Use a recursive function

function findSolution(target) {
    function find (current, history) {
        if (current == target) {
            return history;
        } else if (current > target) {
            return null;
        } else {
            return find(current + 5, `(${history} + 5)`) || 
                   find(current * 3, `(${history} * 3)`);
        }
    } return find(1, "1");
}

console.log(findSolution(54));