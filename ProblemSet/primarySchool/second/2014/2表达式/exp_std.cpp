#include<fstream>
using namespace std;

ifstream fin("exp.in");
ofstream fout("exp.out");

int k[12]={0};

int main()
{
	int n, a, b, c, max;
	fin>>n;
	while (n--)
	{
		max=0;
		fin>>a>>b>>c;
		k[0]=a+b+c;
		k[1]=(a+b)+c;
		k[2]=a+(b+c);
		k[3]=a*b*c;
		k[4]=(a*b)*c;
		k[5]=a*(b*c);
		k[6]=a+b*c;
		k[7]=a+(b*c);
		k[8]=(a+b)*c;
		k[9]=a*b+c;
		k[10]=(a*b)+c;
		k[11]=a*(b+c);
		for (int i=0; i<12; ++i)
		{
			if (max<k[i])
				max=k[i];
		}
		fout<<max<<endl;
	}
	return 0;
}
