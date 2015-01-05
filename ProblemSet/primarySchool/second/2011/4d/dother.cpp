#include<iostream>;
#include<string>
using namespace std;

char str[110];
int check(int a, int b)
{
	b --;
	while(a < b)
	{
		if(str[a] == str[b])
		{
			a ++;
			b --;
		}
		else return 0;
	}
	return 1;
}
int main()
{
	freopen("d.in", "r", stdin);
	freopen("d.out", "w", stdout);
	int i, j, ans, len, ret;
	scanf("%s", str);
	ans = len = strlen(str);
	while(1)
	{
		ret = 0;
		for(i = 0; i + ans <= len; i ++)
		{
			ret = check(i, i+ans);
			if(ret) break;
		}
		if(ret) break;
		ans --;
	}
	printf("%d\n", ans);
}
