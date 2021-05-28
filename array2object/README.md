# Array To Object

  

Use this npm package to convert an array of objects to one object. For example, in the code below, the array `foo` contains 3 objects
```
var obj1 = {
"name":"Bob",
"id": "123",
"DOB":"1/2/1975"
}
var obj2 = {
"name":"John",
"id": "124",
"DOB":"1/3/1975"
}
var obj3 = {
"name":"Joe",
"id": "125",
"DOB":"1/4/1975"
}
var foo = [obj1, ojb2, ojb3];
```
If you select the key "name" then it will convert it to something like this:
```
{
"Bob": {"name":"Bob", "id": "123", "DOB": "1/2/1975"},
"John": {"name":"John", "id":"124", "DOB": "1/3/1975"},
"Joe": {"name": "Joe", "id": "125", "DOB": "1/4/1975"}
}
```

## Usage

```
const arrayConverter = require("@joshyzou/array2object")
let output = arrayConverter(array, keyField)
console.log(output)
```
If the package get's a pending promise as the array, it will return: `I got a pending promise that was not fulfilled yet.` And if it gets something that is not an array, it will return: `I didn't get a vaild array` If the key you inputed is not valid, then it will return: `The key that you input probably isn't valid` And lastly, if you didn't input a key at all, then it will return: `I didn't get a key field to reduce it to.`
