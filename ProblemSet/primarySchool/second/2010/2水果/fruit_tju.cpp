#include <cstdio>
#include <cassert>
int main() {
	freopen("fruit.in","r",stdin);
	freopen("fruit.out","w",stdout);
	int x, y, z;
	scanf("%d%d%d",&x,&y,&z);
	assert(x >= 1 && x <= 100);
	assert(y >= 1 && y <= 100);
	assert(z >= 1 && z <= 100);
	printf("%d\n",x+y+z-2);
	return 0;
}
