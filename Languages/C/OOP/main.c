#include <stdio.h>
#include "cow.h"

int main() {
  Cow* cow = new_Cow();
  
  cow->speak((Animal*) cow);
  return 0;
}