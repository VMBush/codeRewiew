#include "math.h"
#include "stdio.h"

int main() {
  double rad;
  if (scanf("%lf", &rad) != 1 || rad < 0) {
    printf("n/a");
    return 1;
  }
  double res;
  res = round((double)21500 * (double)4 / 3 * M_PI * pow(rad, 3));
  printf("%d", (int)res);

  return 0;
}