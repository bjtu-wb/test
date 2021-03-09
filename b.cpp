/*程序名：b.cpp*/
#include<stdio.h>
static int a;/*只允许文件b.cpp中函数访问的全局变量*/
void fun1()
{ a = 2;
  printf("函数 fun1 中的 a是 %d\n",a);
}

