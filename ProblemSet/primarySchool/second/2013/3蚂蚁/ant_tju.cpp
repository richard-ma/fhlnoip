#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	freopen("ant.in", "r", stdin);
	freopen("ant.out", "w", stdout);
	int ans, T, i, j, k, l, n, max, min;
	ans = -1;
	min = 9999999;
	max = -1;
	scanf("%d%d", &l,&n);
	while(n --) {
		scanf("%d", &k);
		if(k < min) min = k;
		if(k > max) max = k;
		if(l - k < k) k = l - k;
		if(k > ans) ans = k;
	}
	if(min < l - max) i = l - max;
	else i = min;
	printf("%d %d\n", ans, max - min + i);
	return 0;
}
