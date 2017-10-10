#include <stdio.h>

int main() {
  FILE *file = fopen("testfile.txt","w");
  fprintf(file, "Here's some words for your nice file");
  fclose(file);
  return 0;
}
