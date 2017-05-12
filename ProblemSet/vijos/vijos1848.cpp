#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	
	int n, x, ans, t, i;
	
	cin >> n >> x;
	
	ans = 0;
	for (i=1; i<=n; i++) {
		t = i;
		while(t) {
			if (t % 10 == x) ans++;
			t = t / 10;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
