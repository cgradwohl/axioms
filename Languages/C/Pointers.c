#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NOTE:
// foo->bar is equivalent to (*foo).bar
// i.e. it gets the member called bar from the struct that foo points to.

// NOTE:
// '*' can be used as the multiplication operator: 3 * 3
// '*' can declare a pointer: int *x;
// '*' can dereference a pointer: return *x;

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

// note
// '*' can be used as the multiplication operator: 3 * 3
// '*' can declare a pointer: int *x;
// '*' can dereference a pointer: return *x;
int main() {
  int x = 254;
  // when you use star in the declaration, you are DEFINING a pointer(see note above)
  int *ptr = &x;

  printf("the variable x %d\n\n", x);
  printf("the address of x %p\n\n", &x);
  printf("the pointer ptr %p\n\n", ptr);
  // when you use star other times, you are DEREFERENCING a pointer(see note above)
  printf("the value of ptr %d\n\n", *ptr);

  printf("the address of ptr %p\n\n", &ptr);
}