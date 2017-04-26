// vijos 2010 回文日期
#include <iostream>
#include <cstdio>

using namespace std;

int days_of_month(int month) {
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return m[month];
}

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int start_date, start_year, end_date, end_year;
    int y, ry, ans, result;

    cin >> start_date >> end_date;

    start_year = start_date / 10000;
    end_year = end_date / 10000;

    ans = 0;
    for (y=start_year; y<=end_year; y++) {
        ry = y % 10 * 1000 + (y / 10) % 10 * 100 +
            (y / 100) % 10 * 10 + (y / 1000);

        result = y * 10000 + ry;
        if (((result >= start_date) && (result <= end_date) &&  // check date
                (ry / 100 <= 12) && (ry / 100 >= 1) && // check month
                (ry % 100 >= 1) && (ry % 100 <= days_of_month(ry/100))) || // check day
                result == 92200229) { // check leap year
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
