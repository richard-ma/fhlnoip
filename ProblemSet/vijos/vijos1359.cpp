#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

// 判定素数，是素数返回1,否则返回0
int isPrime(int x) {
    int flg, i;

    flg = 1;
    for (i=2; i<=sqrt(x); i++) {
        if (x % i == 0) {
            flg = 0;
            break;
        }
    }

    return flg;
}

// 先选择最高位，然后往后面添加构造数字x
int dfs(int x, int z, int n) {
    int i, r;

    // 位数达到n，x满足要求，输出
    if (z == n) {
        cout << x << endl;
    } else { // 位数不够，继续添加
        for (i=1; i<=9; i++) {
            r = x * 10 + i; // 给x后面添加一位
            if (isPrime(r)) dfs(r, z+1, n); // 继续搜索
        }
    }

    return 0;
}

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    
    int n;

    cin >> n;

    // 一位数的素数只有2, 3, 5, 7四个，用这四个数字开头
    dfs(2, 1, n);
    dfs(3, 1, n);
    dfs(5, 1, n);
    dfs(7, 1, n);

    return 0;
}
