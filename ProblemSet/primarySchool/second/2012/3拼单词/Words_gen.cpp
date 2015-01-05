#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

char *sentence[2][100];
void change_yes(char *str)
{
    int len = strlen(str);
    if(len > 1)
        sort(str+1,str+len-1);
    return;
}
void change_no(char *str)
{
    int len = strlen(str);
    int bit = rand()%len;
    if(str[bit] == 'Z' || str[bit] == 'z')
        str[bit] = str[bit] - 25;
    else
        str[bit] += 1;
}

void make_word(char *&sp)
{
    sp = (char*)malloc(sizeof(char)*21);
    int len = rand()%20 + 1;
    for(int i = 0; i < len; i++)
    {
        char ch = rand()%26 + 'a';
        sp[i] = ch;
    }
    sp[len] = 0;
    return;
}

void make_sentence(int k,int &cnt)
{
    cnt = rand()%100 + 1;
    for(int i = 0; i < cnt; i++)
        make_word(sentence[k][i]);
    return;
}

int main()
{
    srand(0);
    freopen("10.in","w",stdout);
    int N = 10;
    printf("%d\n",N);
    int cnt1,cnt2;
    for(int i = 0; i < N; i++)
    {
        make_sentence(0,cnt1);
        for(int j = 0; j < cnt1; j++)
        {
            printf("%s",sentence[0][j]);
            if(j == cnt1 - 1)
                printf("\n");
            else
                printf(" ");
        }
        for(int j = 0; j < cnt1; j++)
        {
            int key = rand()%2;
            if(i%3&&key)
                change_no(sentence[0][j]);
            else
                change_yes(sentence[0][j]);
            printf("%s",sentence[0][j]);
            if(j == cnt1 - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
