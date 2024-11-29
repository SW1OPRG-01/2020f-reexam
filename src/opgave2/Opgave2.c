#include <stdio.h>
#include <math.h>

void makePositive(double *number);

int main(int argc, char **argv) {
  double value = -42.1337;
  makePositive(&value);
  printf("%.4f\n", value);

  value = 1337;
  makePositive(&value);
  printf("%.4f\n", value);

  return 0;
}

void makePositive(double *number) {
  double result = fabs(*number);
  *number = result;
}