#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int x, y, i, ans;

    cin >> x >> y;
    
    ans = 0;
    for (i=1; i * x <= y; i++) {
        if (!(y%i) && gcd(i * x, y / i) == x) ans++;
    }

    cout << ans << endl;

    return 0;
}
