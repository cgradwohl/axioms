#include <stdio.h>
#include <stdlib.h>

int readFile() {
  char buffer[1000];

  FILE *pointerToFile = fopen("randomnums.txt", "r");

  if (!pointerToFile) {
    printf("Failed to Read the file!\n\n");

    // error code 1
    return 1;
  }

  // use fgets to read the file into a buffer until we get NULL (EOF)
  // while(fgets(buffer, 1000, pointerToFile) != NULL) {
  //   printf("%s", buffer);
  // }

  // fscanf pass the file, data type to read, buffer to store the data
  while(fscanf(pointerToFile, "%s", buffer) == 1) {
    puts(buffer); // adds a new line 
  }

  printf("Success reading from file!\n\n");
  return 0;
}

int writeFile() {
  int randomFile;

  FILE *pFile;

  int randomNumber;

  // returns a FILE pointer. Otherwise, NULL
  pFile = fopen("randomnums.txt", "w");
  // pFile = fopen("randomnums.txt", "a"); // append text to write the file
  // pFile = fopen("randomnums.txt", "r"); // read rights
  // pFile = fopen("randomnums.txt", "a+"); // open file, append text to read or write
  // pFile = fopen("randomnums.txt", "r+"); // read and write rights
  // pFile = fopen("randomnums.txt", "w+"); // delete, read and write rights

  // this means that the file was opened
  if (!pFile) {
    printf("Failed to write the file!\n\n");

    // error code 1
    return 1;
  }

  for(int i = 0; i < 10; i++) {
    randomNumber = rand() % 100;

    printf("Random Number %d", randomNumber);

    fprintf(pFile, "%d\n", randomNumber);
  }

  printf("\n\nSuccess writing to file.\n");

  if(fclose(pFile) != 0) {
    printf("Error: could not close file.\n");
  }

  return 0;
}

int main() {
  // writeFile();
  readFile();
}