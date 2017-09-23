#include <iostream>
#include <cstdio>
using namespace std;
void swap1(int &a, int &b)
//临时变量，引用型
{
    int temp1 = a;
    a = b;
    b = temp1;
}
void swap2(int *a, int *b)
//临时变量，指针型
{
    int temp2 = *a;
    *a = *b;
    *b = temp2;
}
void swap3(int &a, int &b)
//加减法
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap4 (int &a, int &b)
//异或运算
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a1 = 4;
    int b1 = 2;
    swap1(a1, b1);
    printf("a1=%d, b1=%d\n",a1,b1);

    int a2 = 4;
    int b2 = 2;
    swap2(&a2,&b2);
    printf("a2=%d, b2=%d\n",a2,b2);

    int a3 = 4;
    int b3 = 2;
    swap3(a3,b3);
    printf("a3=%d, b3=%d\n",a3,b3);

    int a4 = 4;
    int b4 = 2;
    swap4(a4,b4);
    printf("a4=%d, b4=%d\n",a4,b4);

    //cout << a << " " << b <<endl;
    return 0;
}
