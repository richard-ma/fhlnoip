// vijos 1974 金币
#include <iostream> 
#include <cstdio>

using namespace std;

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	
	int k, t, flg, ans, i, j;
	
	cin >> k;
	
	flg = 0; // 是否加到第k个数字，如果加到了为1，否则为0 
	ans = 0; t = 1;
	for (i=1; i<=k; i++) { // i作为每次加的数字，最多加到k，但实际肯定加不到k 
		for (j=1; j<=i; j++) { // j作为重复次数，例如数字2要重复两次，3要重复三次 
			if (t > k) { // 已经加到k个了，退出循环 
				flg = 1;  
				break;
			} else { // 当前加数为i 
				ans += i;
				t++; // 使用t做已经加的数字个数计数器，ans每加上一个数字，t就加一 
			}
		}
		if (flg) break; // 已经加到k个了，结束循环 
	}
	
	cout << ans << endl;
	
	return 0;
}
