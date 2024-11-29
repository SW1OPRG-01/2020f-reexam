#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printStars(int n);

int main(int argc, char** argv) {

  srand(time(NULL));

  printf("Opgave 1 c)\n");
  for(int i = 0; i < 5; i++) {
    printStars(i);
  }

  for(int i = 5; i > 0; i--) {
    printStars(i);
  }
  
  printf("\n\nOpgave 1 d)\n");
  for(int i = 0; i < 10; i++) {
    printStars(rand() % 6 + 1);
  }


  return 0;
}

void printStars(int n) {
  for(int i = 0; i < n; i++) {
    printf("*");
  }
  printf("\n"); 
}
