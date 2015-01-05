#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 64
#define INF 1000000000
int mp[MAXN][MAXN], vis[MAXN], q[MAXN];
int n;

int check(int ans) {
	int qh, qt, i;
	memset(vis, 0, sizeof(vis));
	vis[0] = 1;
	q[0] = 0;
	for (qh = 0, qt = 1 ; qh < qt ; ++qh) {
		if (q[qh] == n - 1) return 1;
		for (i = 0 ; i < n ; i++) {
			if (!vis[i] && mp[q[qh]][i] < INF && ans <= mp[q[qh]][i]) {
				vis[i] = 1;
				q[qt++] = i;
			}
		}
	}
	return 0;
}

int main() {
	int m;
	int u, v, w;
	memset(mp, 0x3f, sizeof(mp));
	scanf("%d%d",&n,&m);
	while (m--) {
		scanf("%d%d%d",&u,&v,&w);
		--u; --v;
		mp[u][v] = mp[v][u] = w;
	}
	int ans;
	for (ans = 0 ; ; ++ans) {
		//printf("ans:%d\n",ans);
		if (!check(ans)) break;
	}
	printf("%d\n",ans-1);
	return 0;
}
