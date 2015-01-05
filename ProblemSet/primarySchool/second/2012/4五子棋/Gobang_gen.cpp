#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define maxn 30
int pla[maxn][maxn];
int main()
{
    srand(10);
    freopen("6.in","w",stdout);
    int r,c;
    int x,y;
    r = c = 30;
    int k = rand()%100 + 1;
    memset(pla,0,sizeof(pla));
    cout << r << ' ' << c <<' ' << k << endl;
    for(int i = 0; i < k; i++)
    {
        do
        {
            x = rand()%r;
            y = rand()%c;
        }while(pla[x][y] == 1);
        pla[x][y] = 1;
        cout << x + 1 << ' ' << y + 1 << endl;
    }
    return 0;
}
