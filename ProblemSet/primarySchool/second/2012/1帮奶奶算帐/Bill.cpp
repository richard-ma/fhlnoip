#include <iostream>
#include <cstring>
#include <cstdio>
#include <assert.h>
using namespace std;
#define maxn 100
char in[10][10] = {"1.in","2.in","3.in","4.in","5.in","6.in","7.in","8.in","9.in","0.in"};
char out[10][10] = {"1.out","2.out","3.out","4.out","5.out","6.out","7.out","8.out","9.out","0.out"};

struct Node
{
    int p; int c;
    void input()
    {
        cin >> p >> c;
        assert(p>0&&p<=100);
        assert(c>0&&c<=10);
    }
}gd[maxn];
int main()
{
    //for(int tt = 0; tt < 10; tt++){
    //    freopen(in[tt],"r",stdin);
    //    freopen(out[tt],"w",stdout);

    int n;
    cin >> n;
    assert(n>0&&n<=10);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        gd[i].input();
        sum += gd[i].p * gd[i].c;
    }

    cout << sum << endl;
    //}
    return 0;
}
