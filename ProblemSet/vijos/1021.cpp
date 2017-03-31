#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int n, k, x, cnt, ans;

    cin >> n >> k;

    ans = 0;
    while(n--) {
        cnt = 0;
        cin >> x;
        while (x != 0) {
            cnt++;
            cin >> x;
        }
        
        if (cnt >= k) ans++;
    }

    cout << ans << endl;

    return 0;
}
