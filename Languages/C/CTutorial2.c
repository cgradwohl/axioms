#include <stdio.h>

int main() {
  // conditional operators result to ints 1 or 0

  printf("\n");

  int num1 = 2, num2 = 2;

  if (num1 >= num2) {
    // note that is this true first it will run an return first
    printf("num1 > num2 %d\n\n", num1 > num2);
  } else if (num1 < num2) {
    printf("num1 < num2 %d\n\n", num1 > num2);
  } else {
    printf("num1 == num2 %d\n\n", num1 > num2);
  }

  /**
   * && - And
   * || - Or
   * !  - Not 
   */

  int customerAge = 40;

  if(customerAge > 21 && customerAge < 35) printf("Welcome!");
  else printf("Too Old. \n\n");

  // Missed less than 10 days work
  // Has over 30000 in sales
  // OR
  // Signed up more that 30 new customers

  int missedDays = 5;
  int sales = 40000;
  int newCustomers = 21;

  if (missedDays <= 10 && (sales > 30000 || newCustomers > 30)) {
    printf("You get a raise!\n\n");
  } else {
    printf("No Raise for you!\n\n");
  }


  int age = 32;

  // conditional operator
  char* legalAge = (age > 21) ? "true" : "false";
  printf("Is the legal age? %s \n\n", legalAge);

  int numberOfProducts = 10;
  printf("I bought %s products. \n\n", (numberOfProducts > 1) ? "many" : "one");

  // how big does a data type require in memory?

  /**
   * 1 bit is a binary digit, 1 or 0
   * 1 byte == 8 bits
   */
  printf("A char uses %d bytes.\n\n", sizeof(char));
  printf("A int uses %d bytes.\n\n", sizeof(int));
  printf("A long uses %d bytes.\n\n", sizeof(long));
  printf("A long int uses %d bytes.\n\n", sizeof(long int));
  printf("A float uses %d bytes.\n\n", sizeof(float));
  printf("A double uses %d bytes.\n\n", sizeof(double));
  printf("A char uses %d bytes.\n\n", sizeof(char));

  // int bigInt = 999999999999999999;
  // printf("I am bigger than you may have heard %d\n\n", bigInt); // this will print the max int you can hold :)

  // Given a number of bits, calculate the base 10 value you can store
  // e.g. if you have 4 bits, then the biggest number you can write in binary is 15 (1111)
  // int numHowBig = 0;

  // printf("How many bits do you have?");
  // scanf(" %d", &numHowBig); // take input and assign to varible

  // // 0: print what is given
  // // 1: print what is given
  // // 2: 1 + 2 = 3, 11
  // // 3: 3 + 4 = 7, 111
  // // 4: 7 + 8 = 15, 1111

  // long myInc = 1, myMult = 1;
  // long finalVal = 1;

  // while (myInc < numHowBig) {
  //   myMult *= 2;
  //   finalVal = finalVal + myMult;

  //   myInc++;
  // }


  // if((numHowBig == 0) || (numHowBig == 1)) {
  //   printf("Top value: %d\n\n", numHowBig);
  // } else {
  //   printf("Top value: %ld\n\n", finalVal);
  // }

  int secret = 10, numberGuessed = 0;

  while (1) {
    printf("Guess my number : ");
    scanf(" %d", &numberGuessed);

    if (numberGuessed == secret) {
      printf("You guess correctly!\n\n");
      break;
    }
  }


  char sizeOfShirt;

  // DO WHILE
  do {
    printf("what size of shirt? (S, M L): ");
    scanf(" %c", &sizeOfShirt);
  } while (sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');

  // FOR LOOP
  for(int counter = 0; counter <= 20; counter++){
    printf("%d\n", counter);
  }

  for(int counter2 = 0; counter2 <= 40; counter2++){
    if ((counter2 % 2) == 0) {
      continue;
    }
    printf("PRINT ODDS :: %d\n", counter2);
  }
  
}