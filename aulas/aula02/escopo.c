#include <stdio.h>

int global = 20; //variavel compartilhada

int main() {
  int local = 10; //variavel temporaria
  printf("global = %i, local = %i\n", global, local);
  
  {
    int local = 20;
    int temp = 10;
    printf("global = %i, local = %i\n", global, local);
  }

  // local = temp; temp nao existe!!
  printf("global = %i, local = %i\n", global, local);

  return 0;
}