# Chudnovsky Pi Solver

  

Use this npm package to calculate pi. You just give it the number of digits you want to solve for, including the first digit - "3." This package will then return a string of the digits of pi without the decimal point. For example, if you want 5 digits, it will return 31415.
This package uses the [Chudnovsky](https://en.wikipedia.org/wiki/Chudnovsky_algorithm) algorithm to solve for pi.
If you want the final number as a string, then use "false" for the second option, but if you want the final number as a big number, pass the value "true" instead.  

`pisolver({num. of digits}, {optional true/false})`
## Usage
```
var pisolver = require("@joshyzou/pisolver")
let x = pisolver("50", true);
//The variable x will be a number, and not a string
```
  
```
var pisolver = require("@joshyzou/pisolver")

let x = pisolver(50);
x.then(function(result){
console.log(result)

});

//will output 31415926535897932384626433832795028841971693993746 as a string, and not a number
```
