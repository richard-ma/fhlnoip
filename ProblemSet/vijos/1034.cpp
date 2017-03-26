#include <iostream>
#include <cstdio>

using namespace std;

int a[5000];

int find(int x) {
    int p;

    p = x;
    while (a[p] != p) {
        p = a[p];
    }
    return p;
}

int u(int x, int y) {
    int rx, ry;

    rx = find(x);
    ry = find(y);

    if (rx != ry) {
        a[ry] = rx;
    }
}

int main() {
    freopen("1034.in", "r", stdin);
    freopen("1034.out", "w", stdout);

    int n, m, p, i, x, y;

    cin >> n >> m >> p;

    for (i=0; i<n; i++) {
        a[i] = i;
    }

    while(m--) {
        cin >> x >> y;
        u(x, y);
    }
    while(p--) {
        cin >> x >> y;
        if (find(x) == find(y)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
