#include <iostream>
#include <cstdio>

#define MAX 50001

using namespace std;

int a[MAX * 3];
/*
 * 将树分成三大棵
 * 1. 若a，b+n为同一棵树，则a会吃掉b
 * 2. 若a，b+2*n为同一棵树，则b会吃掉a
 * 3. 若a，b是同类，a，b， a+n，b+n,  a+2*n, b+2*n两两合并
 */

int find(int p) {
    if(a[p] == p) return p;
    else return find(a[p]); // get father node
}

void u(int x, int y) {
    a[find(y)] = find(x); // 'root of y' 's father is root of x
}

int main() {
    int n, k, i, t, x, y, ans;

    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    cin >> n >> k;
    for (i=0; i<=3 * n; i++) {
        a[i] = i;
    }

    ans = 0;
    while(k--) {
        cin >> t >> x >> y;
        if(x > n || y > n) {
            ans++;
            continue;
        }
        if(t == 1) {
            if(find(x) == find(y+n) || find(x) == find(y+2*n)) { // x和y不是同类，肯定一个被另一个吃
                ans++;
            } else { // x和y为同类，合并各大子树
                u(x, y);
                u(x+n, y+n);
                u(x+2*n, y+2*n);
            }
        } else {
            if(find(x) == find(y) || find(x) == find(y+2*n)) ans++; // x和y是同类或者x被y吃，都是谎话
            else { // x吃y合并各大子树
                u(x, y+n);
                u(x+n, y+2*n);
                u(x+2*n, y);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
