#include <stdio.h>

/* Print Fahrenheit - Celsius table */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* Lower bound of the output */
  upper = 2000; /* Upper bound of the output */
  step = 200; /* Step size */

  fahr = lower;
  printf("Fahrenheit Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %12.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
