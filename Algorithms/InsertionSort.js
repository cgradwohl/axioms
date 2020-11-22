/**
 * 
 * @param {Array} A - an array of integers
 * @param {Number} n - the last index of the array 
 */
function InsertionSortByShifting(A, n) {
  // base case array of length 1
  if (n <= 0) return;

  // recurrsive call
  InsertionSortByShifting(A, n - 1);

  // insert nth element into A[0 ,..., n-1]
  const valueToInsert = A[n];
  let curr = n - 1;

  while(curr >= 0 && A[curr] > valueToInsert) {
    A[curr + 1] = A[curr];
    curr--;
  }
  A[curr + 1] = valueToInsert;
  return;
}

// test
const array = [19,1,6,22,34,78,24,78,98,234,13,6,12,35];
console.log('array before', array);
InsertionSortByShifting(array, array.length - 1);
console.log('array after', array);