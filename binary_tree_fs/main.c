

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printPrompt();
void addValue();

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

int main(int argc, char *argv[]) {
  char *argument;
  sprintf(argument, "%s", argv[1]);
  struct Node headNode;
  int fileCounter = 0;

  while (1) {
    printPrompt();

    if (strcmp(argument, "add") == 0) {
      addValue();
    }
  }

  return 0;
}

void printPrompt() { printf("binary_tree_fs> "); }

void addValue() {
  int val = 0;
  printf("\nEnter a value to add: ");
  scanf("%d", &val);
}
