#include "stdio.h"
#include <stdio.h>
#define MAXLINE 1000

/*  Defining our functions at the top */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);


int main() {
  int len; 			/* Initialize some variables to hold temporary stats */
  int max;
  char line[MAXLINE];		/* Initialize a character array to hold the current line being read */
  char longest[MAXLINE];	/* Initialize a character array to hold the longest line we've seen yet*/

  max = 0;
  
  while((len = get_line(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      /* This is the part that trips me up - get_line's line is getting used by copy */
      copy(longest, line);
    }
    if (max > 0) {
      printf("%s", longest);
    }
  }
  return 0;
}

/* Take a line and a maximum character limit, return the length of the line */
int get_line(char s[], int lim) {
  int c, i;

  /* Scan through all of the characters in the possible limit if it's EOF or a newline then bail */
  for (i = 0; i  < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i ) {
    s[i] = c; /* Stick all of the copied characters into the new array */
    ;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0'; 			/* Stick a null character on the end of the array */
  return i; 			/* Return the length of the array */
}


void copy(char to[], char from[]) {
  int i;

  i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;  
  }
}
