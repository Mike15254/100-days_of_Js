#!/usr/bin/node

function sumRange(n) {
    let total = 0;
    for (let i = n; i > 0 ; i--){
        total += i
    }
    console.log(total)
    return total

}

function sumRangeRecursive(n, total = 0) {
    if ( n <= 0) {
        return total
    }
    return sumRangeRecursive(n -1, total + n)
}
sumRangeRecursive(3)

let yourName;
do {
    yourName = prompt("Who are you?");
} while (!yourName);
console.log(yourName);