#include <stdio.h>
#include "animal.h"

Animal* animal_constructor(Animal* animal, char* speach){
  animal->speach = speach;
  animal->speak = animal_speak;

  return animal;
}

void animal_speak(Animal* animal){
  printf("%s\n", animal->speach);
};
