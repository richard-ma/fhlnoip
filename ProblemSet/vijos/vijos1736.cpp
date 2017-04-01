#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int a[10001][4];
    int n, x, y, i, j, ans;

    cin >> n;
    for (i=1; i<=n; i++) {
        for (j=0; j<4; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;

    ans = -1;
    for (i=1; i<=n; i++) {
        if (x >= a[i][0] && x <= a[i][0] + a[i][2] &&
            y >= a[i][1] && y <= a[i][1] + a[i][3]) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
