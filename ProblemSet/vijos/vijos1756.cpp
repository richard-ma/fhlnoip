// vijos 1756 数字反转
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    char s[128];
    int end, start, i, l;

    cin >> s;
    if (s[0] == '-') {
        cout << '-';
        end = 1;
    } else {
        end = 0;
    }

    l = strlen(s);
    start = 0;
    for (i=l-1; i>=end; i--) {
        if (start == 0 && s[i] != '0') {
            start = 1;
        }

        if (start == 1) {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}
