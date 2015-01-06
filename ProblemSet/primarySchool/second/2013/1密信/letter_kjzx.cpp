#include<fstream>
#include<string>
using namespace std;

ifstream fin("letter.in");
ofstream fout("letter.out");

int main()
{
	int n=0;
	string sout;
	fin>>n;
	while (n--)
	{
		fin>>sout;
		for (string::size_type i=0; i!=sout.size(); ++i)
		{
			if (sout[i]!='a')
			{
				sout[i]=sout[i]-1;
			}
			else
			{
				sout[i]='z';
			}
		}
		fout<<sout<<endl;
	}
	return 0;
}
