#include<iostream>
#include "add.h"
#include"mul.h"


int main ()
{
    int a=1;
    int b=2;
    printf("a+b=%d\n",add(a,b));
    printf("a*b=%d\n",mul(a,b));
    return 0;
}