#include <stdio.h>

extern int max(int, int);
extern void test(void);

int main(){
  printf("%d\n", max(1, 2));
  test();
}

int max(int num1, int num2){
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}

void test(void) {
  printf("void\n");
}
