// vijos 1398 奖学金

#include <iostream> 
#include <cstdio>

using namespace std;

int id[300], sum[300], chinese[300];

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	
	int n, i, j, t1, t2, temp;
	
	cin >> n;
	
	// 读入成绩，其中数学和英语成绩不影响排名，所以直接算出总成绩后不予保存 
	for (i=1; i<=n; i++) {
		cin >> chinese[i] >> t1 >> t2;
		sum[i] = chinese[i] + t1 + t2;
		id[i] = i;
	}
	
	// 按规则排名 
	for (i=1; i<n; i++) {
		for (j=i+1; j<=n; j++) {
			if ((sum[i] < sum[j]) || (sum[i] == sum[j] && chinese[i] < chinese[j]) || (sum[i] == sum[j] && chinese[i] == chinese[j] && id[i] > id[j])) {
				temp = sum[i]; sum[i] = sum[j]; sum[j] = temp;
				temp = id[i]; id[i] = id[j]; id[j] = temp;
				temp = chinese[i]; chinese[i] = chinese[j]; chinese[j] = temp;
			}
		}
	}
	
	// 输出前五名 
	for (i=1; i<=5; i++) {
		cout << id[i] << " " << sum[i] << endl;
	}
	
	return 0;
}
