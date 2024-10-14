#include "stdio.h"
#include <stdio.h>

int main() {
  int c, i, nwhite, nother;

  int ndigit[10];

  nwhite = nother = 0;

  for (i = 0; i < 10; ++i) {
    /* initializing the array to all 0s */
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c-'0']; /* Incrementing the counter at i based on the fact that the number minus the ASCII digit representation of 0 will put it in the right index */
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite; 		/* Whitespace characters count gets incremented */
    } else {
      ++nother; 		/* If it doesn't fall into the other categories then increment this counter. */
    }
  }
  printf("digits = ");
  for (i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  }
  printf(", whitespace = %d, other = %d\n", nwhite, nother); 
}
