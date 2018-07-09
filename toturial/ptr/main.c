#include <stdio.h>

int main() {
  int var = 20;
  int *ip;

  ip = &var; /* 在指针变量中存储 var 的地址 */
  printf("Address of var variable: %p\n", &var );

  /* 在指针变量中存储的地址 */
  printf("Address stored in ip variable: %p\n", ip );

  /* 使用指针访问值 */
  printf("Value of *ip variable: %d\n", *ip );

  return 0;
}
