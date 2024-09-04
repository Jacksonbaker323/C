#import <stdio.h>

/* Print a Celsius - Fahrenheit table  */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* Lower bound */
  upper = 300; /* Upper bound */
  step = 20; /* Step size */

  celsius = lower;

  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
