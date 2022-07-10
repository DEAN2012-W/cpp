#include<iostream>

#include"test.h"

class test:public Test{
    public:
        void fun2(){
            printf("mainfunc2\n");
        }

        void fun()
        {printf(("mainfun1\n"));
}

};

int main()
{
    test  t1;
    t1.fun1();
    t1.fun();
    t1.fun2();
    return 0;
}