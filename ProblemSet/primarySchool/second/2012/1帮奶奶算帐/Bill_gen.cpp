#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
char in[10][10] = {"1.in","2.in","3.in","4.in","5.in","6.in","7.in","8.in","9.in","0.in"};
char out[10][10] = {"1.out","2.out","3.out","4.out","5.out","6.out","7.out","8.out","9.out","0.out"};
int main()
{
    for(int tt = 0; tt < 10; tt++){
        freopen(in[tt],"w",stdout);
        //freopen(out[tt],"w",stdout);
    srand(0);
    int n = rand()%10 + 1;
    cout << n << endl;
    for(int i = 0; i < n; i++)
    {
        int p,c;
        p = rand()%100 + 1;
        c = rand()%10 + 1;
        cout << p << ' ' << c << endl;
    }
    }
    return 0;
}
