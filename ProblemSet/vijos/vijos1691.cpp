// vijos 1691 输油管道问题 
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int y[10001];

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	
	int n, t, i, j, ans, temp, place;
	
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> t >> y[i]; // x值是没有用的，因为管道都是竖直方向的 
	}
	
	// 根据y值排序 
	for (i=1; i<n; i++) {
		for (j=i+1; j<=n; j++) {
			if (y[i] > y[j]) {
				temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
		}
	}
	
	place = y[(n-1) / 2 + 1]; // 求中位数，即为主管道的位置 
	ans = 0;
	for (i=1; i<=n; i++) {
		ans += abs(y[i] - place); // 使用了绝对值 
	}
	
	cout << ans << endl;
	
	return 0;
}
