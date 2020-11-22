function BubbleSort(A) {
  for (let i = 0; i < array.length; i++) {
    for (let j = A.length - 1; j > i; j--) {
      if(A[j - 1] > A[j]) {
        const curr = A[j];
        A[j] = A[j - 1];
        A[j - 1] = curr;
      }
    }    
  }

  console.log('A: ', A);
}

const array = [7,3,1,87,12,52,12,0,19,2,3,7,1,32,4,2414];

BubbleSort(array);
