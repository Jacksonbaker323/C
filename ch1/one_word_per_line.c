#include "stdio.h"


/* Count lines, words, and characters in input */

int main() {
  int last_letter, current_letter;

  last_letter = current_letter = ' ';

  while ((current_letter = getchar()) != EOF) {
    if (current_letter == ' ' && last_letter != ' ') {
      printf("\n");
      last_letter = current_letter;
    } else if (current_letter == ' ' && last_letter == ' ') {
      ; 
    }else {
      putchar(current_letter);
      last_letter = current_letter;
    }
      }
}
