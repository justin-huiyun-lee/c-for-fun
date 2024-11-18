#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char *file_extension = argv[1];

  printf("File extension: %s\n", file_extension);

  if (argv[1] == NULL) {
    printf("Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  if (argv[1] == NULL) {
    //
    return 1;
  }

  return 0;
}
