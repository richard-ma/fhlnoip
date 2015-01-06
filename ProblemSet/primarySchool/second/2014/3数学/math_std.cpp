#include<fstream>
using namespace std;

ifstream fin("math.in");
ofstream fout("math.out");

int main()
{
	int n, m, k=0, t;
	fin>>n>>m;
	t=m+n-1;
	k=(1+(t-1))*(t-1)/2;
	if (t%2==1)
	{
		k=k+m;
	}
	else
	{
		k=k+n;
	}
	fout<<k<<endl;
	return 0;
}
