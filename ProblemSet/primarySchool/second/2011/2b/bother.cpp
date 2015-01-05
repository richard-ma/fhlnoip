#include <iostream>
using namespace std;

int a[55];
int main()
{
	freopen("b.in", "r", stdin);
	freopen("b.out", "w", stdout);
	int n, i, tmp, mx, ans;
	scanf("%d", &n);
	for(i = 1; i <= n; i ++) a[i] = 0;
	for(i = 1; i <= n; i ++)
	{
		scanf("%d", &tmp);
		a[tmp] ++;
	}
	ans = mx = 0;
	for(i = 1; i <= n; i ++)
	{
		if(a[i] > mx) 
		{
			mx = a[i];
			ans = i;
			tmp = 1;
		}
		else if(a[i] == mx) tmp ++;
	}
	if(tmp == 1) printf("%d\n", ans);
	else printf("0\n");
	return 0;
}
