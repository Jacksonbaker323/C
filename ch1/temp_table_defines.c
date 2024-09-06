#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


/* print Fahrenheit-Celsius table for fahr = 0, 20, 40 ... 300 */

int main() {
  int fahr, celsius;
  fahr = LOWER;

  while (fahr <= UPPER) {
    celsius = 5 *  (fahr - 32) / 9;
    printf("%3d\t%6d\n",/* Can I put a comment here? */ fahr, celsius);
    fahr = fahr + STEP;
  }
}
