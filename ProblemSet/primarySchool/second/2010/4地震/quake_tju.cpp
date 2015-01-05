#include <cstdio>
#include <string>

const int MAXN = 64;
const int INF = 1000000000;
int mp[MAXN][MAXN], vis[MAXN], q[MAXN];
int n;

int check(int ans) {
	int qh, qt;
	memset(vis, 0, sizeof(vis));
	vis[0] = 1;
	q[0] = 0;
	for (qh = 0, qt = 1 ; qh < qt ; ++qh) {
		if (q[qh] == n - 1) return 1;
		for (int i = 0 ; i < n ; i++) {
			if (!vis[i] && mp[q[qh]][i] < INF && ans <= mp[q[qh]][i]) {
				vis[i] = 1;
				q[qt++] = i;
			}
		}
	}
	return 0;
}

int main() {
freopen("quake.in","r",stdin);
freopen("quake.out","w",stdout);
	int m;
	memset(mp, 0x3f, sizeof(mp));
	scanf("%d%d",&n,&m);
	assert(n >= 1 && n <= 50);
	assert(m >= 1 && m <= 200);
	while (m--) {
		int u, v, w;
		scanf("%d%d%d",&u,&v,&w);
		assert(u >= 1 && u <= n);
		assert(v >= 1 && v <= n);
		assert(w >= 1 && w <= 20);
		--u; --v;
		assert(mp[u][v] > INF);
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
