#include <stdio.h>


// “Address of” (&) Operator
// “Value at Address” (*) Operator - By using * operator we can access the value of a variable through a pointer.
//      - (*) points to a variable's value

// the struct defines the shape of you data
// struct dog{
//   // a struct variable defines the memory needed to fit the data
//   // why do I need to definne this as a pointer?
  
//   // since this is a struct, we are saying that we are pointing 
//   // to the value that is being stored at this variable.
  
//   // i.e. the declaration and the assignment arae heppening at the saem time
//   const char *name; // pointer to string
//   const char *breed; // pointer to a string

//   char dude; // char does not require a pointer

//   int avgHeightCm; // int does not require a pointer
//   int avgWeightLbs;
// };

struct dogsFavs {
  /**
   * Here  want to store a string
   * But a string is a character array...
   * therefore I want to store a pointer to the VALUE of the character array
   */
  char *food;
  char *friend;
};


typedef struct dog{
  const char *name; // pointer to string
  const char *breed; // pointer to a string

  char dude; // char does not require a pointer

  int avgHeightCm; // int does not require a pointer
  int avgWeightLbs;

  struct dogsFavs favoriteThings;
} dog;

void getDogInfo(struct dog theDog) {
  printf("\n");

  printf("Name %s\n", theDog.name);
  printf("Breed %s\n", theDog.breed);
  printf("Height %d\n", theDog.avgHeightCm);
  printf("Weight %d\n", theDog.avgWeightLbs);

  printf("DUDE %c\n", theDog.dude);
}


void getMemoryLocs(struct dog theDog) {
  printf("\n");

  printf("Name Location: %d\n", theDog.name); // these ARE pointers, so they will prrinnt address
  printf("Breed Location: %d\n", theDog.breed);
  printf("Height Location: %d\n", &theDog.avgHeightCm); // these are NOT pointers so use & to get the address
  printf("Weight Location: %d\n", &theDog.avgWeightLbs);

  printf("DUDE Location %d\n", theDog.dude); // this IS a pointer, so it will prrinnt address
}

// a stuct defines the template of your data

void getDogsFavorites(dog theDog) {
  printf("\n");
  printf("Favorite Food %s\n", theDog.favoriteThings.food);
  printf("Favorite Friend %s\n", theDog.favoriteThings.friend);
}

void setDogWeight(dog theDog, int newWeight) {
  theDog.avgWeightLbs = newWeight;

  printf("The weight was changed to %d \n\n", theDog.avgWeightLbs);
}

// now setDogWeightPtr is RECIEVING a pointer to the memory address...
// so we need to use (*) to get the value at the address
void setDogWeightPtr(dog *theDog, int newWeight) {
  // when gettig the value at a struct address, you need to surround with (*myStruct)
  // (*theDog).avgWeightLbs = newWeight;

  // OR you can use the arrow notation for structs
  theDog->avgWeightLbs = newWeight;
  

  // when gettig the value at a struct address, you need to surround with (*myStruct)
  // printf("The weight was changed to %d \n\n", (*theDog).avgWeightLbs);

  // OR you can use the arrow notation for structs
  printf("The weight was changed to %d \n\n", theDog->avgWeightLbs);

}


void main() {
  // struct dog cujo = {"Cujo", "Saint Bernard", 'a', 90, 264};

  // struct dog cujo2 = cujo;

  // getDogInfo(cujo);

  // getMemoryLocs(cujo2);
  // getMemoryLocs(cujo);


  // with typedef you dont need to declare a new struct using 'struct' !
  dog benji = {"Benji", "Silverback", 'S', 25, 90, {"Hot Dogs", "Chris"}};

  getDogsFavorites(benji);

  // now setDogWeightPtr wil be RECIEVING a pointer to memory
  setDogWeightPtr(&benji, 20);

  printf("the weight in main %d\n\n", benji.avgWeightLbs);
}