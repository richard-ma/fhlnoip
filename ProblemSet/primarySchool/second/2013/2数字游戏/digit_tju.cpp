#include <cstdio>
#include <cstring>
#include <assert.h>
#include <algorithm>
using namespace std;
int a[110];

int f(int x) {
	int tmp[10], tot = 0, ret = 0;
	while(x) {
		tmp[tot++] = x % 10;
		x /= 10;
	}
	sort(tmp, tmp + tot);
	for(int i = 0;i < tot; ++i) {
		ret = ret * 10 + tmp[i];
	}
	return ret;
}
int main() {
	freopen("digit.in", "r", stdin);
	freopen("digit.out", "w", stdout);
	int n, tmp;
	scanf("%d", &n);
	assert(n <= 100);
	for(int i = 0;i < n; ++i) {
		scanf("%d", &tmp);
		assert(tmp <= 1000000);
		a[i] = f(tmp);
	}
	printf("%d\n", *max_element(a, a + n));
}