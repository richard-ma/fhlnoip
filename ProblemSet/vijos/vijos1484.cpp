// vijos 1484 ISBN号码
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    //reopen("test.in", "r", stdin);
    //reopen("test.out", "w", stdout);
    
    char s[16];
    int l, i, ans, c;

    cin >> s;
    l = strlen(s);

    ans = 0;
    c = 1;
    for(i=0; i<l-1; i++) {
        if (s[i] != '-') {
            ans = ans + c * (s[i] - '0');
            c++;
        }
    }

    ans = ans % 11;
    if (ans == s[l-1] - '0' || (ans == 10 && s[l-1] == 'X')) {
        cout << "Right";
    } else {
        for (i=0; i<l-1; i++) {
            cout << s[i];
        }
        if (ans == 10) cout << 'X';
        else cout << ans;
    }
    cout << endl;

    return 0;
}
