#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
//#define NEWLINE '\n'

int main() {
  const char NEWLINE = '\n';
  int area;
  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%c", NEWLINE);
}
