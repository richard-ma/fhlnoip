// vijos 1974 ���
#include <iostream> 
#include <cstdio>

using namespace std;

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	
	int k, t, flg, ans, i, j;
	
	cin >> k;
	
	flg = 0; // �Ƿ�ӵ���k�����֣�����ӵ���Ϊ1������Ϊ0 
	ans = 0; t = 1;
	for (i=1; i<=k; i++) { // i��Ϊÿ�μӵ����֣����ӵ�k����ʵ�ʿ϶��Ӳ���k 
		for (j=1; j<=i; j++) { // j��Ϊ�ظ���������������2Ҫ�ظ����Σ�3Ҫ�ظ����� 
			if (t > k) { // �Ѿ��ӵ�k���ˣ��˳�ѭ�� 
				flg = 1;  
				break;
			} else { // ��ǰ����Ϊi 
				ans += i;
				t++; // ʹ��t���Ѿ��ӵ����ָ�����������ansÿ����һ�����֣�t�ͼ�һ 
			}
		}
		if (flg) break; // �Ѿ��ӵ�k���ˣ�����ѭ�� 
	}
	
	cout << ans << endl;
	
	return 0;
}
