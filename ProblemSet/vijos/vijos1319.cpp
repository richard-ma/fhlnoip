// vijos 1319 数列
#include <iostream>
#include <cstdio>

using namespace std;

int a[2000];

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int k, n, e, i, j, flg, t;

    cin >> k >> n;

    e = 1;
    i = 2;
    a[1] = 1;
    flg = 1;
    while (i <= n) {
        if (flg) {
            a[i] = 1;
            for (j=1; j<=e; j++) {
                a[i] = a[i] * k;
            }
            e++;
            i++;
            flg = 0;
        } else {
            t = i;
            for (j=1; j<=i-2; j++) {
                a[t] = a[i-1] + a[j];
                t++;
            }
            i = t;
            flg = 1;
        }
    }

    cout << a[n] << endl;

    return 0;
}
