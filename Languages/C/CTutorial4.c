#include <stdio.h>
#include <stdlib.h>

void oldGenerateTwoRandomNumbers(int rand1, int rand2) {
  rand1 = rand() % 50 + 1;
  rand2 = rand() % 50 + 1;

  printf("new rand 1: %d\n\n", rand1);
  printf("new rand 2: %d\n\n", rand2);
}

// to get the address: &
// to access the value at the address: *

// 2. since main() is calling generateTwoRandomNumbers() with memory addresses as paramters,
// we need to access the value from those address'
void generateTwoRandomNumbers(int *rand1, int *rand2) {
  // 3. here we access the value from the address and reassign the value using the address
  *rand1 = rand() % 50 + 1;
  *rand2 = rand() % 50 + 1;

  printf("new rand 1: %d\n\n", *rand1);
  printf("new rand 2: %d\n\n", *rand2);
}

// to get the address: &
// to access the value at the address: *
void editMessageSent(char* message, int size) {
  char newMessage[] = "i am new message";

  if(size > sizeof(newMessage)) {
    for(int i = 0; i < sizeof(newMessage); i++) {
      message[i] = newMessage[i];
    }
  } else {
    printf("NEW MESSAGE is TOO BIGG\n\n");
  }
}

void main() {
  // int rand1 = 12, rand2= 15;

  // // return the address in Hex
  // printf("rand1 = %p : rand2 = %p\n\n", &rand1, &rand2);
  // // return the address in decimal
  // printf("rand1 = %d : rand2 = %d\n\n", &rand1, &rand2);

  // printf("rand1 = %d : rand2 = %d\n\n", sizeof(rand1), sizeof(rand2));

  // // here we define a pointer
  // int * pRand1 = &rand1;

  // printf("Pointer %p\n\n", pRand1);
  // printf("Pointer %d\n\n", pRand1);


  // // dereferencing the pointer
  // // AKA get the value from the pointer
  // printf("Value %d\n\n", *pRand1);

  // Arrays and pointers
  // an array name is essentially a pointer
  int primes[] = {2,3,5,7};
  printf("First Index: %d\n\n", primes[0]);
  // note that array name refs the first index of the array in contiguous memory
  printf("First Index: %d\n\n", *primes);

  // Pointer arithmetic - adding one to the arrays address (which points to the first element)
  printf("First Index: %d\n\n", *(primes + 0));
  printf("Second Index: %d\n\n", *(primes + 1));
  printf("Third Index: %d\n\n", *(primes + 2));
  printf("Fourth Index: %d\n\n", *(primes + 3));

  // how to create and array of strings
  // create an array of pointers
  char * students[4] = {"Chris", "Patsy", "Lucy"};

  for(int i = 0; i < 4; i++) {
    printf("%s : %d \n\n", students[i], &students[i]);
  }

  // pointer with functions

  // 0. allocate some memory for two 32 bit integers
  int rand1 = 0, rand2 = 0;

  oldGenerateTwoRandomNumbers(rand1, rand2);
  printf("old rand 1: %d\n\n", rand1);
  printf("old rand 2: %d\n\n", rand2);

  // 1. here I am passing in the address of my two variables
  generateTwoRandomNumbers(&rand1, &rand2);

  // 4. here I am printing the values stored at my vairables
  // which were overridden in the function generateTwoRandomNumbers()
  // to do that I had to pass in the variables memory addresses.
  printf("new rand 1 again: %d\n\n", rand1);
  printf("new rand 2 again: %d\n\n", rand2);


  // passing strings arround
  char randomMessage[] = "edit me dude bro man bear";
  editMessageSent(randomMessage, sizeof(randomMessage));

  printf("new message::: %s", randomMessage);
}