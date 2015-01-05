#include <iostream>
#include <cstring>
#include <cstdio>
#include <assert.h>
#include <algorithm>
using namespace std;

char sentence[2][100][21];
int p[2];
void read_sentence(int k)
{
    char ch;
    p[k] = 0;
    while(1)
    {
        assert(p[k]<100);
        scanf("%s",&sentence[k][p[k]++]);
        assert(strlen(sentence[k][p[k]-1])<=20);
        scanf("%c",&ch);
        if(ch == '\n')
            break;
    }
    return;
}
bool check()
{
    int len1,len2;
    if(p[0] != p[1])
        return false;
    for(int i = 0; i < p[0]; i++)
    {
        len1 = strlen(sentence[0][i]);
        len2 = strlen(sentence[1][i]);
        if(len1 != len2)
            return false;
        if(sentence[0][i][0] == sentence[1][i][0] && sentence[0][i][len1-1] == sentence[1][i][len2-1])
        {

            if(len1 > 1){
                sort(sentence[0][i]+1,sentence[0][i]+len1-1);
                sort(sentence[1][i]+1,sentence[1][i]+len2-1);
            }
            for(int j = 1; j < len1-1; j++)
            {
                if(sentence[0][i][j] != sentence[1][i][j])
                    return false;
            }
        }else
            return false;
    }
    return true;
}
char in[10][10] = {"1.in","2.in","3.in","4.in","5.in","6.in","7.in","8.in","9.in","0.in"};
char out[10][10] = {"1.out","2.out","3.out","4.out","5.out","6.out","7.out","8.out","9.out","0.out"};

int main()
{
    int N;
    //for(int tt = 0; tt < 10; tt++){
    //freopen(in[tt],"r",stdin);
    //freopen(out[tt],"w",stdout);
    scanf("%d",&N);
    assert(N>=1&&N<=10);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 2; j++)
            read_sentence(j);
        if(check())
            printf("Yes\n");
        else
            printf("No\n");
    }
    //}
    return 0;
}
