#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  //Get the length of a line of text
  while ((len = get_line(line, MAXLINE)) > 0) {
    //If the length of the line we just iterated over is longer than any line we've seen previously store that length
    if (len > max) {
      max = len;
      //Then copy the string into the "longest" array for storage. 
      copy(longest, line);
    }
    if (max > 0) {
      printf("%s\n>", longest);
    }
  }
  return 0;
}

int get_line(char s[], int lim) {
  //Pass a character array and a character limit.
  int c, i;
  // Loop over the array and as long as we're not 1) over the limit or 2) the character isn't a new line or EOF then continue
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    //Add the character at the location to the array
    s[i] = c;
    //If it is a new line character add it to the array and increment?
    if (c == '\n') {
      s[i] = c;
      ++i;
    }
  }
  //Tack on a null terminator at the end of the array.
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  //Take two character arrays and copy from one and put it in the other.
  int i;

  i = 0;
  //Iterate over the array and copy from one to the other until we hit the null terminator
  while ((to[i] = from[i]) != '\0') {
    ++i; 
  }
}
