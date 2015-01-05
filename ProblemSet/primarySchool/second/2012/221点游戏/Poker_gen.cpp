#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
char in[5][10] = {"6.in","7.in","8.in","9.in","10.in"};
char out[5][10] = {"6.out","7.out","8.out","9.out","10.out"};
int main()
{
    srand(0);
    int m,n;
    for(int j = 0; j < 5; j++)
    {
        freopen(in[j],"w",stdout);
        //freopen(out[j],"w",stdout);
        int T = rand()%10 + 1;
        cout << T << endl;
        while(T--)
        {
            m = rand()%10 + 1;
            n = rand()%10 + 1;
            cout << m << ' ' << n << endl;
            for(int i = 0; i < m; i++)
            {
                cout << rand()%13 + 1;
                if(i != m - 1)
                    cout << ' ';
                else
                    cout << '\n';
            }
            for(int i = 0; i < n; i++)
            {
                cout << rand()%13 + 1;
                if(i != n - 1)
                    cout << ' ';
                else
                    cout << '\n';
            }
        }
    }
    return 0;
}
