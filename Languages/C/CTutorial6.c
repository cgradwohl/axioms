/**
 * Structs
 * Unions - store one piece of data that has several types of data (never at the same time)
 * Enums
 * Linked Lists
 * Recursive Structures
 */

#include <stdio.h>

typedef struct product {
  const char *name;
  float price;

  struct product *next;
} product;

void printLinkedList(product *head) {
  while(head != NULL) {
    printf("A %s costs %.2f\n\n", head->name, (*head).price);

    head = head->next;
  }
}

int main() {

  product tomato = {"Tomato", .51, NULL};
  product potato = {"Potato", 1.51, NULL};
  product lemon = {"Lemon", .21, NULL};
  product milk = {"Milk", 3.05, NULL};

  tomato.next = &potato;
  potato.next = &lemon;
  lemon.next = &milk;

  product apple = {"Apples", 1.58, NULL};

  lemon.next = &apple;
  apple.next = &milk;

  printLinkedList(&tomato);


  // store one piece of data (the union), that has several types of data (never at the same time)
  // a union ONLY holds 1 value at a time !!! event though it may seem, it can hold more.
  // typedef union {
  //   short individual;
  //   float pound;
  //   float ounce;

  // } amount;

  // // How to assign a value the union type? In this example the value must be of type short or float
  // // 1. designated initializer
  // amount orangeAmount = {.ounce = 16};

  // // 2. dot operator
  // orangeAmount.individual = 4;


  // /**
  //  * NOTE
  //  * The following will appear to work. It looks like we can access both values in the union, like a struct.
  //  */
  // printf("\n");
  // printf("orange juice amount: %.2f : Size : %d \n\n", orangeAmount.ounce, sizeof(orangeAmount.ounce));
  // printf("Number of oranges: %d : Size : %d \n\n", orangeAmount.individual, sizeof(orangeAmount.individual));

  // orangeAmount.pound = 1.5;
  // printf("orange juice amount: %.2f : Size : %d \n\n", orangeAmount.pound, sizeof(orangeAmount.pound));

  // /**
  //  * NOTE
  //  * But we cannot guarentee that we can access these values, like a struct
  //  * SINCE each property of the union points to the same address in memory.
  //  * 
  //  * Dont rely on these results
  //  */
  // printf("invidual address: %d\n\n", &orangeAmount.individual);
  // printf("pound address: %d\n\n", &orangeAmount.pound);
  // printf("ounce address: %d\n\n", &orangeAmount.ounce);

  // typedef enum {
  //   INDIV,
  //   OUNCE,
  //   POUND
  // } quantity;

  // // How to use a union inside a struct
  // typedef struct {
  //   char *brand; // here we expect a pointer to a chanracter array to be passed in.
  //   amount theAmount;
  //   quantity quantityType;

  // } oProduct;

  // // designated initializer
  // oProduct productOrder = {"Chiquita", .theAmount.ounce = 16, OUNCE};

  // printf("The O Product Brand: %s\n\n", productOrder.brand);
  // printf("The O Product Amount: %.2f\n\n", productOrder.theAmount.ounce);

  // /**
  //  * Again we have to be very careful of using the right conversion characters (%d %s %.3f) when accessing values from the union type
  //  * 
  //  * the easy way to solve that problem is to use Enums - basically use the ENUM to set the current type on the struct
  //  * 
  //  * we add the enum to the struct as a property so that we can guarentee a certain type is being used in the union,
  //  * and therefore we can use the correct conversion characters 
  //  */ 

  
  // if(productOrder.quantityType == INDIV) {
  //   // now we know the type is INDIV
  //   printf("you bought %d oranges\n\n", productOrder.theAmount.individual);
  // } else if (productOrder.quantityType == OUNCE) {
  //   printf("you bought %.2f oranges\n\n", productOrder.theAmount.ounce);
  // } else if (productOrder.quantityType == POUND) {
  //   printf("you bought %.2f oranges\n\n", productOrder.theAmount.pound);
  // }


}
