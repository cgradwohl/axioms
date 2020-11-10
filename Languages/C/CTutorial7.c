#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void noMoreNewLine(char *theString) {
  char * isANewLine;

  // strchr finds the FIRST occurence of whatever your looking for i.e the second param
  // strrchr finds the LAST occurence of whatever your looking for i.e the second param
  isANewLine = strrchr(theString, '\n');

  if (isANewLine) {
    *isANewLine = '\0';
  } 
}

void makeLowerCase(char *theString) {
  int i = 0;

  while(theString[i]) {
    theString[i] = tolower(theString[i]);
    i++;
  }
}

void getCharInfo() {
  char theChar;

  while((theChar = getchar()) != '\n') {
    printf("Letter or number %d\n\n", isalnum(theChar));

    printf("Alphabetic character %d\n\n", isalpha(theChar));

    printf("Blank %d\n\n", isblank(theChar));

    printf("Number char %d\n\n", isdigit(theChar));

    printf("Anything but space %d\n\n", isgraph(theChar));

    printf("Lowercase %d\n\n", islower(theChar));

    printf("Uppercase %d\n\n", isupper(theChar));

    printf("Punctuation %d\n\n", ispunct(theChar));

    printf("Any space %d\n\n", isspace(theChar));



  }
}

void main() {
  getCharInfo();

  // char doYouWantToQuit[10];

  // printf("Enter quit to quit: ");

  // // fgets adds a new line char to the end
  // fgets(doYouWantToQuit, 10, stdin);

  // printf("YES NEW LINE %s", doYouWantToQuit);

  // noMoreNewLine(doYouWantToQuit);

  // printf("NO MORE NEW LINE %s", doYouWantToQuit);

  // makeLowerCase(doYouWantToQuit);

  // printf("LOWER CASE NOW::: %s", doYouWantToQuit);


  // // THIS KEEPS LOOPING UNTIL YOU ENTER QUIT
  // while(strcmp(doYouWantToQuit, "quit")) {
  //   printf("Enter quit to quit: ");

  //   // fgets adds a new line char to the end
  //   fgets(doYouWantToQuit, 10, stdin);

  //   printf("YES NEW LINE %s", doYouWantToQuit);

  //   noMoreNewLine(doYouWantToQuit);

  //   printf("NO MORE NEW LINE %s", doYouWantToQuit);

  //   makeLowerCase(doYouWantToQuit);
  // }

  // printf("Thank you for typing quit!");

  // char name[50];

  // printf("What is your name? ");

  // gets(does not check the allocated memmory)
  // gets(name);

  // print to the string with puts :)
  // puts("HI!");
  // puts(name);

  // fgets(name, 50, stdin);

  // fputs("hi ", stdout);
  // fputs(name, stdout);


  // creating a pointer to the first character in the character array AKA a string
  // char *randomString = "Just some random stuff";

  // // increment through each character in the character array randomString
  // while (*randomString) {

  //   // increment through each value in the randomString character array
  //   putchar(*randomString++);


  //   // That is essentially a difficult way to print the string to the screen 
  // }


  // THIS IS THE SAME AS ABOVE !
  // int i = 0;
  // while(randomString[i] != '\0') {
  //   putchar(randomString[i++]);
  // }



  // line buffering
  // char theChar;

  // while ((theChar = getchar()) != '~') {
  //   putchar(theChar);
  // }


  // _Bool isANumber; // 1 or 0

  // int number;
  // int sumOfNumbers = 0;

  // printf("Enter a number: ");

  // isANumber = (scanf("%d", &number) == 1);

  // while (isANumber) {
  //   sumOfNumbers = sumOfNumbers + number;

  //   printf("Enter a number: ");

  //   isANumber = (scanf("%d", &number) == 1);
  // }

  // printf("The sum is %d\n\n", sumOfNumbers);
} 