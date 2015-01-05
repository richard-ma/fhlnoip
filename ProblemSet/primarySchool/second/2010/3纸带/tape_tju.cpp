#include <cstdio>
#include <cassert>

int a[128];

int main() {
	freopen("tape.in","r",stdin);
	freopen("tape.out","w",stdout);
	int n, i, sum = 0, ans = 0;
	scanf("%d",&n);
	assert(n >= 1 && n <= 100);
	for (i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
		assert(a[i] >= -100 && a[i] <= 100);
		sum += a[i];
		if (sum > ans) ans = sum;
		if (sum < 0) sum = 0;
	}
	printf("%d\n",ans);
	return 0;
}
