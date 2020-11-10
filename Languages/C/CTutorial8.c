#include <stdio.h>
#include <stdlib.h>

typedef struct product{
  float price;
  char productName[30]; // each char is 1 byte, we are allocating 30 bytes of memory
} product;

int main() {
  // define a pointer to type products
  product *pProducts;

  int i, j;

  int numOfProducts;

  printf("Enter the number of products to store: ");

  // get a digit input and store it at the variable address
  scanf("%d", &numOfProducts);

  // allocate memory and cast it to type product
  // here we allocate enough memory for each product we want to store
  pProducts = (product *) malloc(sizeof(product) * numOfProducts);

  for (i = 0; i < numOfProducts; i++) {
    printf("Enter a Product Name: ");

    // use the pointer (the value at the memory address), and pointer arithmatic
    // to store a new product struct. (We have i numberOfProducts memory which pProducts points too);
    scanf("%s", &(pProducts + i)->productName);

    printf("Enter a Product Price: ");

    // take the value from scanf and store it at the next memory address that pProducts points too.
    scanf("%f", &(pProducts + i)->price);
  }

  printf("Products Stored\n");

  for (j=0; j < numOfProducts; j++) {
    printf("%s\t%.2f\n", (pProducts + j)->productName, (pProducts + j)->price);
  }

  free(pProducts);

  return 0;

}


// Awesome memory alloc, while loop and scanf example
// int main() {
//   int amtNums;

//   printf("How many numbers to store?");

//   // take the input and assign it at the memory address
//   scanf("%d", &amtNums);

//   int *pRandomNumbers;

//   pRandomNumbers = (int *) malloc(amtNums * sizeof(int));

//   if (pRandomNumbers != NULL) {
//     int i = 0;

//     printf("Enter a Number or Quit: ");

//     /**
//      * while there is free available space
//      * AND
//      * while the inputed value is a number (scanf("%d", &pRandomNumbers[i]))
//      * NOTE that scanf("%d", &pRandomNumbers[i]) will return 1 if it captures a number or 0 if it does not capture a number.
//      **/ 
//     while(i < amtNums && scanf("%d", &pRandomNumbers[i]) == 1) {
//       printf("Enter a number or Quit: ");

//       i++;
//     }

//     printf("\nYou entered the following numbers:\n");

//     for (int j = 0; j < i; j++) {
//       printf("%d\n", pRandomNumbers[j]);
//     }
//   }

//   // when the system terminates, the memory is freed anyway
//   // but it is good to explicitly free the memory, especially since not all functions may terminate.
//   free(pRandomNumbers);

//   return 0;
// }

