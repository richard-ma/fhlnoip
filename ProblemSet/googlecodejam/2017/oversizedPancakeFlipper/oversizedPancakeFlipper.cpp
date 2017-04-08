#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int isAnswer(int s[], int length) {
    int i, flg;

    flg = 1;
    for (i=0; i<length; i++) {
        if (s[i] == 0) flg = 0;
        break;
    }

    return flg;
}

int flipOne(int x) {
    return !x;
}

int flip(int* start, int length) {
    int i;
    int* p = start;
    for (i=0; i<length; i++) {
        *p = flipOne(*p);
        p++;
    }
    return 0;
}

int bfs(int s[], int k, int length) {



    return 0;
}

int main() {
    freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int t, caseCnt, k, i, len;
    char buf[1024];
    int s[1024];

    cin >> t;

    caseCnt = 1;
    while(t--) {
        cin >> buf;
        len = strlen(buf);
        for (i=0; i<len; i++) {
            if (buf[i] == '-') s[i] = 0;
            else s[i] = 1;
        }
        cin >> k;

        cout << "Case #" << caseCnt << ": ";
        cout << endl;
        caseCnt++;
    }

    return 0;
}
