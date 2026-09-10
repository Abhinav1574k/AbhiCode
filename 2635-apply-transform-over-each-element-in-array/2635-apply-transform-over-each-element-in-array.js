/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const transformArr = [];
    for(let i = 0; i < arr.length; i++){
        transformArr[i] = fn(arr[i], i);
    }
    return transformArr;
};