#include <iostream>
#include <cstdio>

using namespace std;

double a, b, c, d;

double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int i;
    double x1, x2, k;

    cin >> a >> b >> c >> d;

    for (i=-100; i <= 100; i++) {
        x1 = i; x2 = i + 1;
        if (f(x1) == 0) printf("%.2lf ", x1);
        else if (f(x1) * f(x2) < 0) {
            while (x2 - x1 >= 0.001) {
                k = (x1 + x2) / 2;
                if (f(x1) * f(k) <= 0) x2 = k;
                else x1 = k;
            }
            printf("%.2lf ", x1);
        }
    }

    return 0;
}
