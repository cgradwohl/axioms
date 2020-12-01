/**
 * NOTE: this fails because of CLOSURE!
 * you need to reset the refence to 'min' when doing the swap
 * but that dump
 */
// function SelectionSort(A) {
//   for (let i = 0; i < A.length; i++) {
//     let min = A[i];
//     for (let j = i + 1; j < A.length; j++) {
//       if (min > A[j]) {
//         const temp = A[j];
//         A[j] = min;
//         A[i] = temp;
//         min = A[i]; // this is required
//       }
//     }
//   }

//   return A;
// }

function SelectionSort(A) {
  for (let i = 0; i < A.length; i++) {
    for (let j = i + 1; j < A.length; j++) {
      if (A[i] > A[j]) {
        const temp = A[j];
        A[j] = A[i];
        A[i] = temp;
      }
    }
  }

  return A;
}

const a = [7,1,4,2,3,9,8,10,13,14];
const result = SelectionSort(a);

console.log('RESULT \n', result);