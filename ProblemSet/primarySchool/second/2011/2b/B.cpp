#include<fstream>
using namespace std;

ifstream fin("b.in");
ofstream fout("b.out");

const int arr_size=50;
int v[arr_size];

int main()
{
	int n, m, a=0, t=0, s=0;
	fin>>m; n=m;
	while (n--)
	{	fin>>t; v[t]++;	}
	for (int i=1; i<=m; ++i)
	{
		if (a<v[i]) {a=v[i]; s=i; }
	}
	t=0;
	for (int k=1; k<=m; ++k)
	{
		if (a==v[k]) {t++;}
		if (t>1)	{	s=0;}
	}
	fout<<s;
	return 0;
}
