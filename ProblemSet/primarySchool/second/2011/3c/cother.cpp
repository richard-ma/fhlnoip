#include <iostream>
using namespace std;

int a[10] = {1, 5, 10, 20, 50};
int main()
{
	freopen("c.in", "r", stdin);
	freopen("c.out", "w", stdout);
	int n, i;
	int ans = 0;
	scanf("%d", &n);
	for(i = 4; i >= 0; i --)
	{
		if(n >= a[i])
		{
			ans += n/a[i];
			n %= a[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
