#!/usr/bin/node

const Person = {
    name: ['Mike', 'Edina'],
    age: 19,
    bio () {
        console.log( this.name[0] + ' and ' + this.name[1] + ' are ' + this.age + ' years old.');
    }
}

Person.bio();