/**
 * Multi line comment
 * */

// Single line comment


#include <stdio.h>
#include <string.h>

#define MYNAME "Chris";

// global variable
int myGlobal = 100;


// we always need to define a main function
int main() {
  char myChar = 'C';

  // 16 or 32 bit (2 or 4 bytes) fixed width integer
  int age = 32;

  // 64 bit (8 bytes) fixed width integer
  long int bigNum = 2000000;

  // 32 bit (4 bytes) floating point number
  float myFloat = 3.14;

  // 64 bit (8 bytes) floating point number
  double myDouble = 25.19283764;

  printf("\n");

  printf("\t");

  printf("This will print to screen\n\n");

  printf("I am %d years old\n\n", age);
  printf("Big NUMBER %ld\n\n", bigNum);
  printf("pi %.5f\n\n", myFloat); // print 5 decimal places of float
  printf("pi %.15f\n\n", myDouble); // print 15 decimal places of float

  printf("The first leter of my Name is %c\n\n", myChar);

  printf("My name is %s\n\n", "Chris");

  // Strings
  char myArrayName[15] = "Chris Gradwohl"; // must allocate number of character + a string terminator \0
  printf("My name is %s\n\n", myArrayName);

  // dynamic array ????
  char myArrayName2[] = "Chris Gradwohl"; // must allocate number of character + a string terminator \0
  printf("My name is also %s\n\n", myArrayName2);

  // to reassign the value of your character array AKA strings ... use strcopy() from sting.h library
  // O(N)  :)
  strcpy(myArrayName2, "DUDE BRO");
  printf("My name is also %s\n\n", myArrayName2);

  // recieve input from the user

  // allocate memory
  // char middleInitial;

  // printf("What is your middle initial? ");

  // // can only accept one char at a time or what you specify at compile time
  // // what is the & for?
  // scanf(" %c", &middleInitial);

  // printf("Middle initial: %c \n", middleInitial);

  // char first[30];
  // char last[30];

  // printf("What is your name? ");

  // // telling scanf that we want to get two strings from the user
  // scanf(" %s %s", first, last);

  // printf("Your Name: %s %c %s\n\n", first, middleInitial, last);

  // int month;
  // int day;
  // int year;

  // printf("What is you Birthday? ");

  // scanf(" %d/%d/%d", &month, &day, &year);

  // printf("You Birthday Is: %d/%d/%d \n\n", month, day, year);


  // MATH
  int num1 = 12;
  int num2 = 15;
  int numAns;

  float dec1 = 3.14, dec2 = 1.5, decAns;

  printf("Int Calc: %d\n\n", num2/num1);

  printf("Decimal Calc: %f\n\n", dec2/dec1);

  printf("Modulus %d\n\n", num2 % num1);

  // order of operations
  printf("PEMDOS 1 %d\n\n", 3+7*10);
  printf("PEMDOS 2 %d\n\n", (3+7)*10);

  int randomNum = 1;
  printf("1 + 2 : %d\n\n", randomNum += 2);

  // NOTE clang will do the computation in the printf BEFORE, then print.
  // warning: unsequenced modification
  printf("%d + 2 : %d\n\n", randomNum, randomNum += 2);

  // -=, *=, /=, %=, varName++, varName--

  int num4 = 1;
  printf("the before op ++%d : %d\n\n", num4, ++num4);

  num4 = 1;
  printf("the after op %d++ : %d\n\n", num4, num4++);

  // CASTING
  float numberEx = 24.0;

  float numberEx2 = 12.0;

  printf("numberEx / numberEx2 : %d\n\n", (int) numberEx / (int) numberEx2);
}