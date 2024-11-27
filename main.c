#include<stdio.h>
int a=50;
int b=50;
int main()
{
    extern int a ;

    printf("a=%d\n",a);
    fun1();
    fun2();
    return 0;
}
void fun1 ()
{
    extern int a;
    extern int b;
    int y =a+b;
    printf("y=%d\n",y);
}
void fun2()
{
    extern int a;
    extern int b;
    int z=a-b;
    printf("z=%d\n",z);
}
