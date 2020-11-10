/**
 * Struct Linked Lists
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * The value of a pointer is a number and that number is an address.
 * i.e. let x be a pointer, then x = 4, where 4 is a memory address.
 *      int *x;
 *      int i;
 *    1 - NULL 
 *    2 - x   -----
 *    3 - NULL    |
 *    4 - 777 <--|
 *    5 - NULL
 */ 

typedef struct product {
  // 30 characters max
  float price;
  char name[30];
  //does this work?
  // char *name;

  struct product *next;
} product;

// here we are defining a pointer of type product
// it points to a product in memory
product *pFirstNode = NULL;
product *pLastNode = NULL;

void createNewList() {
    product *pProductList = (product *) malloc(sizeof(product));

    pProductList->next = NULL;

    printf("::Enter product name?");
    scanf("%s", &(pProductList)->name);

    printf("::Enter product price?");
    scanf("%f", &(pProductList)->price); // doesn't matter if its a float or a string here, %s works

    pFirstNode = pProductList;
    pLastNode = pProductList;
}

void inputData() {
  if (pFirstNode == NULL) {
    createNewList();
  } else {
    // here we define a pointer to allocated memory of type product
    product *pNewStruct = (product *) malloc(sizeof(product));

    printf("Enter product name?");
    scanf("%s", &(pNewStruct)->name);

    printf("Enter product price?");
    scanf("%f", &(pNewStruct)->price); // doesn't matter if its a float or a string here, %s works

    // if the two pointers point to the same memory address
    if (pFirstNode == pLastNode) {
      pFirstNode->next = pNewStruct;

      pLastNode = pNewStruct;

      pNewStruct->next = NULL;
    } else {
      pLastNode->next = pNewStruct;

      pNewStruct->next = NULL;

      pLastNode = pNewStruct;
    }

  }

}

void outputData() {
  struct product *pProducts = pFirstNode;

  printf("Product Entered\n\n");

  while(pProducts != NULL) {
    printf("%s costs %.2f\n\n", pProducts->name, pProducts->price);

    pProducts = pProducts->next;
  }
}

int main() {
  inputData();
  inputData();
  inputData();

  outputData();

}