#include<iostream>
using namespace std;
#include <stack>
#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;


int main()
{
#if 0
    stack<int>mystack;
    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        mystack.push(idx);
    }
    int length = mystack.size();
    printf("length:%d\n", length);

    int topval = 0;
    while (!mystack.empty())
    {
        topval = mystack.top();
        mystack.pop();
        printf("topval:%d\n", topval);
    }
#endif

#if 0
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);
    stu1.sex = 'm';

    memset(&stu2, 0, sizeof(stu2));
    stu2.age = 10;
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);
    stu2.sex = 'w';

    memset(&stu3, 0, sizeof(stu3));
    stu3.age = 20;
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);
    stu3.sex = 'm';
    
    stack<Stu_info * >mystack;
    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    Stu_info * topVal = NULL;
    while (!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("age:%d\t, name:%s\t, sex:%c\n", topVal->age, topVal->name, topVal->sex);
    }
#endif
    char *str = "{}[]()";
    int length = strlen(str);

    stack<char>mystack;
    for (int idx = 0; idx < length; idx++)
    {
        if ((str[idx] == '{') || (str[idx] == '(') || (str[idx] == '['))
        {
            mystack.push(str[idx]);
        }
        else
        {

            if (mystack.empty())
            {
                return false;
            }
            if ( (mystack.top() != '{' && str[idx] == '}') || (mystack.top() != '[' && str[idx] == ']') || (mystack.top() != '(' && str[idx] == ')'))
            {
                return false;
            }
            mystack.pop();
        }
    }
   
    return mystack.empty();
}