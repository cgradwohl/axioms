#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int globalVar = 0;

int addTwoInts(int num1, int num2) {
  return num1 + num2;
}

void changeVars() {
  int age = 70;
  printf("age as local: %d\n\n", age);
  globalVar = 100;
}

int main() {
  // functions
  int total = addTwoInts(7,3);
  printf("total: %d \n\n", total);

  int age = 10;

  globalVar = 50;

  printf("age before: %d\n\n", age);
  printf("globalVar before: %d\n\n", globalVar);

  changeVars();

  printf("globalVar after: %d\n\n", globalVar);


  // int whatDo = 0;

  // keep doinm this while this other thing is true
  // do {
  //   printf("\n");
  //   printf("1. What time is it?\n");
  //   printf("2. What is todays date?\n");
  //   printf("3. What day is it?\n");
  //   printf("4. Quit? \n");

  //   scanf(" %d", &whatDo);
  // } while (whatDo < 1 || whatDo > 4);

  // if (whatDo == 1) {
  //   printf("time\n");
  // } else if (whatDo == 2) {
  //   printf("date\n");
  // } else if (whatDo == 3) {
  //   printf("sunday\n");
  // } else {
  //   printf("Bye\n");
  //   exit(0); // success exit code
  // }

  // switch (whatDo) {
  //   case(1): printf("time\n");
  //     break;
  //   case(2): printf("date\n");
  //     break;
  //   case(3): printf("sunday\n");
  //     break;

  //   default: printf("Bye!\n");
  //     exit(0); // success exit code
  //     break;
  // }

  // char wholeName[15] = "Chris Gradwohl";

  // int primes[3] = {2, 3, 5};

  // int morePrimes[] = {13, 17, 19, 23};

  // // int morePrimes2[] = [2]; noop
  // printf("ARRAY ITEMS %d\n\n", primes[1]);

  // // Strings
  // char city[7] = {'C', 'h', 'i', 'c', 'a', 'g', 'o'};

  // char city2[] = "Paris";

  // printf("Cities: %s %s\n\n", city, city2);

  // char yourCity[30];

  // printf("What city?\n");

  // fgets(yourCity, 30, stdin);


  // for(int i=0; i < 30; i++) {
  //   if(yourCity[i] == '\n') {
  //     yourCity[i] = '\0';
  //     break;
  //   }
  // }

  // printf("Hello %s\n\n", yourCity);

  // // string compare
  // printf("You in Paris ? %s\n\n", (strcmp(yourCity, "Paris") == 0) ? "yes" : "no");

  // char yourState[] = ", CA";

  // printf("Letters in yourCity: %lu \n\n", strlen(yourCity));

  // strcat(yourCity, yourState);

  // printf("You Live in: %s", yourCity);

  // // strcopy can OVERRIDE other parts of memory!

  // strlcpy(
  //   yourCity,
  //   "El pueblo del la Reina Los Angeles",
  //   sizeof(yourCity)  
  // );

  // printf("Your new city!: %s\n\n", yourCity);

}