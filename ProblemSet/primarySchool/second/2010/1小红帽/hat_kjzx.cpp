#include<fstream>
using namespace std;

ifstream fin("hat.in");
ofstream fout("hat.out");

int main()
{
	int n, i, a[100], max=-100, min=100, cmax=0, cmin=0, re=-1;
	//读入已知条件
	fin>>n;
	for (i=1; i<=n; i++)
	{
		fin>>a[i];
	}
	//找出最大数和最小数
	for (i=1; i<=n; i++)
	{
		if (max<a[i]) max=a[i];
		if (min>a[i]) min=a[i];
	}
	//找出最大数个数和最小数个数
	for (i=1; i<=n; i++)
	{
		if (a[i]==max) cmax++;
		if (a[i]==min) cmin++;
	}
	if (max-min==1 && cmax+cmin==n && cmin==max)
	{
		re=max;
	}
	if (max==min && max!=0 && n-max==1)
	{
		re=n;
	}
	if (max==0 && min==0)
	{
		re=0;
	}
	fout<<re<<endl;
	return 0;
}
