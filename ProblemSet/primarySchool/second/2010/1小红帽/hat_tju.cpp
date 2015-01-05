#include <cstdio>
#include <string>
#include <string>
using namespace std;

int cnt[128], a[128];

int main() {
	freopen("hat.in","r",stdin);
	freopen("hat.out","w",stdout);
	int n, i, flg = 1;
	scanf("%d",&n);
	assert(n >= 1 && n <= 100);
	for (i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
		if (a[i] < 0 || a[i] > n - 1) {flg = 0;}
		else ++cnt[a[i]];
	}
	if (flg == 0) printf("-1\n");
	else if (cnt[0] == n) {printf("0\n");}
	else {
		int ans;
		for (ans = 1 ; ans <= n ; ans++)
			if (cnt[ans-1] == ans && cnt[ans] == n - ans)
				break;
		if (ans > n) printf("-1\n");
		else printf("%d\n",ans);
	}
	return 0;
}
