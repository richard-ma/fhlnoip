#include<fstream>
using namespace std;

ifstream fin("candy.in");
ofstream fout("candy.out");

int a[1001]={0};

int main()
{
	int T, n, k, f=0, t;
	fin>>T>>n;
	while (T--)
	{
		for (int i=0; i<n; ++i)
		{
			fin>>a[i];
		}
		for (int j=0; j<(n-1); ++j)
		{
			k=a[j]; t=k; f=0;
			for (int x=j+1; x<n; ++x)
			{
				if (k>a[x] && t>a[x])
				{
					t=a[x];
				}
				if (k>a[x] && t<a[x])
				{ 
					f=1; break;
				}
			}
			if (f==1)
			{
				fout<<"No"<<endl;
				break;
			}
		}
		if (f==0)
		{
			fout<<"Yes"<<endl;
		}		
	}
	return 0;
}
