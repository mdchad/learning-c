#include <stdio.h>

int beej(void) {
    printf("OII BRUV");
    return 12;
}

void printWord(char* word) {
    printf("%s", word);
}

int main(void) {
  printf("Hello, Munir!\tColumn\n");
  printf("the \v lazy fox brown\n");
  beej();
  printWord("\nTHIS IS IT\n");
  return 0;
}
