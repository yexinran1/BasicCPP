#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>

int main()
{
#if 0
    bool a = true;

    int len = sizeof(a);
    printf("len:%d\n", len);
    /* bool占一个字节 只有true：1 false：0 */
#endif

    string s = "hello world";
    printf("s:%s\n", s.c_str());

    return 0;
}