/*程序名：c.cpp */
#include<stdio.h>
int a;          /*允许其它文件中函数访问的全局变量*/
void fun2()
{ a = 4;
  printf("函数 fun2 中的 a是 %d\n",a);
}

