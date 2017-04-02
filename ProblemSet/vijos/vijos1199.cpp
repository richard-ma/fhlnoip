#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[1001][1001];

int main() {
    freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int n, m, i, j, ki, kj, cnt, ans;
    char t;

    cin >> n >> m;

    memset(a, 0, sizeof(a));
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cin >> t;
            if (t == '#') a[i][j] = 1;
        }
    }

    ans = 0;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cnt = 0;
            for (ki=i; ki<i+m; ki++) {
                for (kj=j; kj<j+m; kj++) {
                    if (a[ki][kj] == 1) cnt++;
                }
            }

            if (cnt > ans) ans = cnt;
        }
    }

    cout << ans << endl;

    return 0;
}
