// vijos 1691 ���͹ܵ����� 
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
		cin >> t >> y[i]; // xֵ��û���õģ���Ϊ�ܵ�������ֱ����� 
	}
	
	// ����yֵ���� 
	for (i=1; i<n; i++) {
		for (j=i+1; j<=n; j++) {
			if (y[i] > y[j]) {
				temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
		}
	}
	
	place = y[(n-1) / 2 + 1]; // ����λ������Ϊ���ܵ���λ�� 
	ans = 0;
	for (i=1; i<=n; i++) {
		ans += abs(y[i] - place); // ʹ���˾���ֵ 
	}
	
	cout << ans << endl;
	
	return 0;
}
