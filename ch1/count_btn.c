/* Count the number of new lines, blanks and tabs - exercise 1-8  */

#include "stdio.h"

int main() {
  int c, b, t, nl;

  b = 0;
  t = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    } else if (c == '\t') {
      ++t;
    } else if (c == ' ') {     
      ++b;
    }
  }
  printf("%d, %d, %d\n", nl, t, b);
}
