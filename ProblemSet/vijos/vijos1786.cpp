#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int n, i;

    cin >> n;

    for (i=2; i<n; i++) {
        if (n % i == 0) {
            cout << n / i << endl;;
            break;
        }
    }
    

    return 0;
}
