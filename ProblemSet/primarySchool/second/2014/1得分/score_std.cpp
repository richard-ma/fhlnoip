#include<fstream>
#include<string>
using namespace std;

ifstream fin("score.in");
ofstream fout("score.out");

int main()
{
	int n, m, sum=0, k;
	string s;
	fin>>n;
	while (n--)
	{
		fin>>m;
		fin>>s; 
		for (string::size_type i=0; i<s.size(); ++i)
		{
			if (s[i]=='Y')
			{
				k=1;
				while (s[i]=='Y')
				{	
					sum+=k++; i++;
				}
				i--;
			}
		}
		fout<<sum<<endl;
		sum=0;
	}
	return 0;
}
