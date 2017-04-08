#include <iostream>
#include <cstdio>

using namespace std;

int a[10000001];

int main() {
    freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    
    int t, caseCnt, n, k;

    cin >> t;

    caseCnt = 1;
    while(t--) {

        cin >> n >> k;

        cout << "Case #" << caseCnt << ": ";
        cout << endl;
        caseCnt++;
    }

    return 0;
}
