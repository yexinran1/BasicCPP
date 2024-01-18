#include<iostream>
using namespace std;
#include<vector>
#include<string.h>
#include<stdio.h>

#define BUFFER_SIZE 3

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{
#if 0
    vector<int>myvec;
    /* 插入数据 */
    myvec.push_back(5);
    /* 查询数组元素大小 */
    int length = myvec.size();
    int capacity = myvec.capacity();
    printf("length:%d\n", length);
    printf("capacity:%d\n", capacity);

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myvec.push_back(idx);
    }
        
    
#endif

#if 1
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

    vector<Stu_info>myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);
    

    int length = myvec.size();
    int capacity = myvec.capacity();

    printf("length:%d\n", length);
    printf("capacity:%d\n", capacity);

    Stu_info tmpInfo;
    memset(&tmpInfo, 0, sizeof(tmpInfo));
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        tmpInfo = myvec[idx];
        printf("age:%d\t, name:%s\t, sex:%c\n", tmpInfo.age, tmpInfo.name, tmpInfo.sex);
    }
#endif
    return 0;
}
