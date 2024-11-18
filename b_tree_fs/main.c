
#include <stdio.h>
#include <stdlib.h>

void printPrompt();
struct Data dataInput();

struct Node {};

struct Data {
  int PRIMARY_KEY;
  char *DATA;
  int POINTER;
};

void dataOrganizer(struct Data data, int file_count);
char *searchRepo(int key);

int main() {
  char *filename = "";

  int file_count = 0;

  while (1) {
    printPrompt();
    struct Data data = dataInput();

    FILE *fptr;
    sprintf(filename, "%d.txt", data.PRIMARY_KEY);
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

    dataOrganizer(data, file_count);

    file_count++;
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

void dataOrganizer(struct Data data, int file_count) {
  if (file_count < 1) {
    return;
  }

  // Organize the data in the file
  // 1. Read the file
  // 2. Sort the data
  // 3. Write the data back to the file
}

char *searchRepo(int key) {
  FILE *fptr;
  char *filename = "";

  sprintf(filename, "%d.txt", key);

  while (1) {
    // get first key
    // if key is less than first key,
  }
}
