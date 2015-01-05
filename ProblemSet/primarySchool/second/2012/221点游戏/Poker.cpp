#include <iostream>
#include <cstring>
#include <cstdio>
#include <assert.h>
using namespace std;
#define maxn 10

char in[10][10] = {"1.in","2.in","3.in","4.in","5.in","6.in","7.in","8.in","9.in","0.in"};
char out[10][10] = {"1.out","2.out","3.out","4.out","5.out","6.out","7.out","8.out","9.out","0.out"};
int main()
{
    //for(int j = 0; j < 10; j++){
    //freopen(in[j],"r",stdin);
    //freopen(out[j],"w",stdout);
    int m,n,T;
    cin >> T;
    assert(T>0&&T<=10);
    while(T--)
    {
        cin >> m >> n;
        assert(m<=10&&m>0);
        assert(n<=10&&n>0);
        int ta,tb;
        int suma,sumb;
        suma = sumb = 0;
        for(int i = 0; i < m; i++)
        {
            cin >> ta;
            assert(ta>0&&ta<14);
            suma += ta;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> tb;
            assert(tb>0&&tb<14);
            sumb += tb;
        }
        if(suma > 21) suma = 0;
        if(sumb > 21) sumb = 0;
        if(suma > sumb)
            cout << "Win" << endl;
        else if(suma == sumb)
            cout << "Draw" << endl;
        else
            cout << "Lose" << endl;
    //}
    }
    return 0;
}
