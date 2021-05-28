const { performance } = require('perf_hooks');
function flashsort(arr) 
  {
    var max = 0, min = arr[0];
    var n = arr.length;
    var m = ~~(0.45 * n);
    var l = new Array(m);
 
    for (var i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
 
     if (min === arr[max]) {
        return arr;
    }
 
    var c1 = (m - 1) / (arr[max] - min);
 
 
    for (var k = 0; k < m; k++) {
        l[k] = 0;
    }
    for (var j = 0; j < n; ++j) {
        k = ~~(c1 * (arr[j] - min));
        ++l[k];
    }
 
    for (var p = 1; p < m; ++p) {
        l[p] = l[p] + l[p - 1];
    }
 
    var hold = arr[max];
    arr[max] = arr[0];
    arr[0] = hold;
 
    //permutation
    var move = 0, t, flash;
    j = 0; 
    k = m - 1;
  var p = 0;
    while (move < (n - 1)) {
        process.stdout.clearLine();
        process.stdout.cursorTo(0);
        process.stdout.write("Sort major permutation iteration: "+p);
        p++
        while (j > (l[k] - 1)) {
            ++j;
            k = ~~(c1 * (arr[j] - min));
        }
        if (k < 0) break;
        flash = arr[j];
        while (j !== l[k]) {
            k = ~~(c1 * (flash - min));
            hold = arr[t = --l[k]];
            arr[t] = flash;
            flash = hold;
            ++move;
        }
    }
    console.log("")
    //insertion
    for (j = 1; j < n; j++) {
      if (j % 10000 === 0){
        process.stdout.clearLine();
        process.stdout.cursorTo(0);
        process.stdout.write("Insertion #: "+j );
      }
        hold = arr[j];
         i = j - 1;
        while (i >= 0 && arr[i] > hold) {
            arr[i + 1] = arr[i--];
        }
        arr[i + 1] = hold;
    }
    console.log("")
    return arr;
}

for (var arra=[],i=0;i<90000000;++i){
  arra[i]=i;
  if (i % 10000 === 0){
    process.stdout.clearLine();
    process.stdout.cursorTo(0);
    process.stdout.write("Creation iteration: "+i );
  }
}
console.log("")
function shuffle(array) {
  var tmp, current, top = array.length;
  if(top) while(--top) {
    current = Math.floor(Math.random() * (top + 1));
    tmp = array[current];
    array[current] = array[top];
    array[top] = tmp;
    if (top % 10000 === 0){
      process.stdout.clearLine();
      process.stdout.cursorTo(0);
      process.stdout.write("Shuffle iteration: "+(array.length-top) );
    }
  }
  console.log("")
  return array;
}

arra = shuffle(arra);
//console.log("Original Array Elements"); 
//console.log(arra); 
var t0 = performance.now()
let sortedarray = flashsort(arra);
var t1 = performance.now()
console.log("Call to sort took " + (t1 - t0) + " milliseconds.")

// validation
var temp = -1;
for (var u = 0; u<sortedarray.length; u++){
  if (sortedarray[u] - 1 !== temp) throw "Sorting algorithm failed validation because of number "+sortedarray[u]+" on the "+u+"'th element";
  temp ++;
  if (temp % 10000 === 0){
    process.stdout.clearLine();
    process.stdout.cursorTo(0);
    process.stdout.write("Validation iteration: "+temp );
  }
}
console.log("")
console.log("Sorted Array Elements"); 
console.log(sortedarray);
