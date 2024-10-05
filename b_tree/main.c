
#include <stdio.h>
#include <stdlib.h>

void printPrompt();
struct Data dataInput();

struct Data {
  int PRIMARY_KEY;
  char *DATA;
};

int main() {
  int file_counter = 0;
  char *filename = "";
  sprintf(filename, "file_%d.txt", file_counter);

  while (1) {
    printPrompt();
    struct Data data = dataInput();

    FILE *fptr;
    fptr = fopen(filename, "w");

    if (fptr) {
      printf("File successfully created");
    } else {
      fprintf(stderr, "File could not be created");
      return 1;
    }

    char *full_string;
    sprintf(full_string, "%d\n%s", data.PRIMARY_KEY, data.DATA);

    fputs(full_string, fptr);
  }

  return 0;
}

void printPrompt() { printf("btree> "); }

struct Data dataInput() {
  struct Data data;

  printf("Enter a primary key [a = auto]: \n");
  scanf("%d", &data.PRIMARY_KEY);

  printf("Enter the data for this key: \n");
  scanf("%s", data.DATA);

  return data;
}

void dataOrganizer() {}
