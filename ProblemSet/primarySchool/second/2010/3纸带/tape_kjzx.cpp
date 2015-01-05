#include<fstream>
using namespace std;

ifstream fin("tape.in");
ofstream fout("tape.out");

int main()
{
	int n, i, a[100], max=0, fmax=0;
	fin>>n;
	for (i=1; i<=n; i++)
	{
		fin>>a[i];
	}
	for (i=1; i<=n; i++)
	{
		max+=a[i];
		if (fmax<max) fmax=max;
		if (max<0)
		{
			max=0;
		}
	}
	fout<<fmax<<endl;
	return 0;
}
