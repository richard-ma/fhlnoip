#include <iostream>
using namespace std;

int main()
{
    freopen("a.in", "r", stdin);
    freopen("a.out", "w", stdout);
    int m, n, i, sm, sn, tmp;
    scanf("%d%d", &m, &n);
    sm = sn = 0;
    for(i = 0; i < m; i ++)
    {
		scanf("%d", &tmp);
		sm += tmp;
	}
	for(i = 0; i < n; i ++)
	{
		scanf("%d", &tmp);
		sn += tmp;
	}
	if(sm > sn) printf("1\n");
	else if(sm < sn) printf("2\n");
	else printf("0\n");
	return 0;
}
