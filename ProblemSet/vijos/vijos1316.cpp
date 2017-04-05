// vijos 1316 明明的随机数
#include <iostream> 
#include <cstdio>

using namespace std;

int a[101];

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	
	int n, i, j, ans, temp;
	
	cin >> n;
	
	// 读入数据 
	for (i=1; i<=n; i++) {
		cin >> a[i];
	}
	
	// 排序 
	for (i=1; i<n; i++) {
		for (j=i+1; j<=n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	// 去重统计 
	ans = 1;
	for (i=2; i<=n; i++) {
		if (a[i] != a[i-1]) ans++;
	}
	cout << ans << endl;
	// 去重输出 
	cout << a[1];
	for (i=2; i<=n; i++) {
		if (a[i] != a[i-1]) cout << " " << a[i];
	}
	cout << endl;
	
	return 0;
}
