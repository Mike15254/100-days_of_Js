#!/usr/bin/node

// Normal function that counts down

function countDown(n) {
    for (let i = n; i > 0 ; i --) {
        console.log(i)
    }
    console.log('Wow!')
}


// when writing a recussive function makle sure you have a break out statment
// this is to avoid an infinte loop

// A recussive function

function countDownRecursive(n) {

    if (n <= 0) {
        console.log('Wow!')  //this is break out statment
        return
    }
    console.log(n)
    countDownRecursive(n - 1)
}

countDownRecursive(4)