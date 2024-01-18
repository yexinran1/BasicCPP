#include<set>
#include<map>
#include<stdio.h>
#include<iostream>
using namespace std;

struct Stuinfo
{
    int age;
    char sex;
};

int main()
{
    map<int,int> mymap;

    /* 7这个位置来决定的 */
    mymap[7] = 666;
    printf("map:%d\n", mymap[7]);

    Stuinfo info;
    info.age = 20;
    info.sex = 'm';
    map<string, Stuinfo> mymap2;
    mymap2["xx"] = info;
    printf("xx age:%d, sex:%c\n", mymap2["xx"].age, mymap2["xx"].sex);
    return 0;
}