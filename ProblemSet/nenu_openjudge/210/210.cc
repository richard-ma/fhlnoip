#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdio>
using namespace std;

map<char,int>amap;
char temp[100];
int oribase;
int desbase;

int convet(char a[],int oribase)
{
    int len=strlen(a);
    int i;
    int result=0;
    for(i=0;i<len;i++)
    {
        result+=amap[a[len-1-i]]*pow((double)oribase,i);
    }
    return result;
}

void convet2(int num,int desbase)
{
    char test[100];
    int i=0;
    int testnum;
    int len;
    while(num!=0)
    {
        testnum=num%desbase;
        num=num/desbase;
        if(testnum==15)
            test[i]='F';
        else    if(testnum==14)
            test[i]='E';
        else if(testnum==13)
            test[i]='D';
        else if(testnum==12)
            test[i]='C';
        else if(testnum==11)
            test[i]='B';
        else if(testnum==10)
            test[i]='A';
        else if(testnum==9)
            test[i]='9';
        else if(testnum==8)
            test[i]='8';
        else if(testnum==7)
            test[i]='7';
        else if(testnum==6)
            test[i]='6';
        else if(testnum==5)
            test[i]='5';
        else if(testnum==4)
            test[i]='4';
        else if(testnum==3)
            test[i]='3';
        else if(testnum==2)
            test[i]='2';
        else if(testnum==1)
            test[i]='1';
        else if(testnum==0)
            test[i]='0';
        i++;
    }
    test[i]='\0';
    reverse(test,test+strlen(test));
    strcpy(temp,test);
}

int main ()
{
    amap['0']=0;amap['1']=1;amap['2']=2;amap['3']=3;
    amap['4']=4;amap['5']=5;amap['6']=6;amap['7']=7;
    amap['8']=8;amap['9']=9;amap['A']=10;amap['B']=11;
    amap['C']=12;amap['D']=13;amap['E']=14;amap['F']=15;
    int midresult;
    int len;
    while(scanf("%s%d%d",temp,&oribase,&desbase)!=EOF)
    {
        midresult=convet(temp,oribase);
        convet2(midresult,desbase);
        len=strlen(temp);
        if(len>7)
        {
            printf("  ERROR\n");
        }
        else
            printf("%7s\n",temp);
    }
    return 0;
}
