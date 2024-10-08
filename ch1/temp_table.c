#import <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, 40 ... 300 */

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit of temperature table */
  step = 20; /* steps between readings */

  fahr = lower;

  while (fahr <= upper) {
    celsius = 5 *  (fahr - 32) / 9;
    printf("%3d\t%6d\n",/* Can I put a comment here? */ fahr, celsius);
    fahr = fahr + step;
  }
}
