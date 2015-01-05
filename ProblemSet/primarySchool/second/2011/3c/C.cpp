#include<fstream>
using namespace std;
ifstream fin("c.in");
ofstream fout("c.out");

int main()
{
	int v[]={1,5,10,20,50};
	int i=4, r, cc=0, t;
	fin>>r; t=r;
	while (i>=0 && t>0)
	{
		cc+=t/v[i]; t=t%v[i];
		i--;
	}
	fout<<cc;
	return 0;
}
