#!/usr/bin/node
const callMeMoby = require('./101-more').callMeMoby;
callMeMoby(3, function () {
  console.log('C is fun');
});