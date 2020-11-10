#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  ADDRESS | VALUE | Note
 *    1     | 777   |
 *    2     | 888   |
 *    3     | 999   |
 *    4     | 111   |
 *    5     | 254   |  the variable x
 *    6     | 255   |
 *    7     | 5     | ptr to the variable x
 * 
 * int x = 254;
 * int *p = &x;
 * Assume the variable x is stored at address 2
 */

int main() {
  int x = 254;
  // when you use star in the declaration, you are DEFINING a pointer
  int *ptr = &x;

  printf("the variable x %d\n\n", x);
  printf("the address of x %p\n\n", &x);
  printf("the pointer ptr %p\n\n", ptr);
  // when you use star other times, you are DEREFERENCING a pointer
  printf("the value of ptr %d\n\n", *ptr);

  printf("the address of ptr %p\n\n", &ptr);
}