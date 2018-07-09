// auto RAM
// register 寄存器
// static 声明周期
// extern 全局
#include <stdio.h>

int count;
extern void write_extern();

int main() {
  count = 5;
  write_extern();
}
