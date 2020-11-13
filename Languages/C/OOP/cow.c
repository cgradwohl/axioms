#include <stdlib.h>
#include "cow.h"

Cow* new_Cow(){
  Cow* cow = calloc(1, sizeof(struct COW_STRUCT));
  Animal* animal = animal_constructor((Animal*) cow, "MOO MOO !");

  // inherit the speak method from the Animal "class"
  cow->speak = animal->speak;
  return cow;
}