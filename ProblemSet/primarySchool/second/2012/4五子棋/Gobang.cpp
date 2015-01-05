#include <iostream>
#include <cstring>
#include <cstdio>
#include <assert.h>
using namespace std;
#define maxk 100

#define maxn 30
int r,c;
struct Point
{
    int x,y;
    void input()
    {
        cin >> x >> y;
        assert(x <= r && x >= 1);
        assert(y <= c && y >= 1);
        x--;
        y--;
    }
} p[maxk];
int pla[maxn][maxn];
int dir[4][2] = {1,0,0,1,1,1,1,-1};
bool check_pos(int x,int y)
{
    if(x >= 0 && x < r && y >= 0 && y < c)
        return true;
    else
        return false;
}
void Check(int k)
{
    int cnt = 0;
    int tx,ty,cc;
    memset(pla,0,sizeof(pla));
    for(int i = 0; i < k; i++)
    {

        pla[p[i].x][p[i].y] = i%2 + 1;
        for(int j = 0; j < 4; j++)
        {
            cnt = 0;
            cc = 1;
            while(check_pos(p[i].x+cc*dir[j][0],p[i].y+cc*dir[j][1])&&
                  pla[p[i].x+cc*dir[j][0]][p[i].y+cc*dir[j][1]] == pla[p[i].x][p[i].y])
            {
                cc++;
                cnt++;
            }
            cc = 1;
            while(check_pos(p[i].x-cc*dir[j][0],p[i].y-cc*dir[j][1])&&
                  pla[p[i].x-cc*dir[j][0]][p[i].y-cc*dir[j][1]] == pla[p[i].x][p[i].y])
            {
                cc++;
                cnt++;
            }
            //if(p[i].x == 10 && p[i].y == 10)
            //    cout << cnt << ' ' << j << endl;
            if(cnt == 4)
            {
                if(i % 2 == 0)
                    cout << (i / 2 + 1) <<" Win" << endl;
                else
                    cout << (i / 2 + 1) <<" Lose" << endl;
                return;
            }
        }
    }
    cout << "Draw" << endl;
    return;
}

int main()
{
    int k;
    //for(int j = 5; j < 10; j++)
    //{
        //freopen("10.in","r",stdin);
        //freopen("10.out","w",stdout);
        cin >> r >> c;
        assert(r >= 1 && r <= 30);
        assert(c >= 1 && c <= 30);
        cin >> k;
        assert(k >= 1 && k <= 100);
        for(int i = 0; i < k; i++)
        {
            p[i].input();
        }
        Check(k);
   // }
    return 0;
}
