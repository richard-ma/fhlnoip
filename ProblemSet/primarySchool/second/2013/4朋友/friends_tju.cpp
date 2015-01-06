#include <cstdio>
#include <cstring>
#include <assert.h>
using namespace std;
#define MAXN 510

int father[MAXN];
bool vis[MAXN];
int find(int x) {
	if(father[x] == x) return x;
	return father[x] = find(father[x]);
}

int main() {
	freopen("friends.in", "r", stdin);
	freopen("friends.out", "w", stdout);
	int N, M;
	int x, y;
	scanf("%d%d", &N, &M);
	assert(N <= 500);
	assert(M <= 1000);
	for(int i = 1;i <= N; ++i) father[i] = i;
	for(int i = 0;i < M; ++i) {
		scanf("%d%d", &x, &y);
		int tx = find(x);
		int ty = find(y);
		father[tx] = ty;
	}
	memset(vis, 0, sizeof(vis));
	int ans = 0;
	for(int i = 1;i <= N; ++i) {
		int t = find(i);
		if(!vis[t]) ans ++;
		vis[t] = 1;
	}
	printf("%d\n", ans);
}
	