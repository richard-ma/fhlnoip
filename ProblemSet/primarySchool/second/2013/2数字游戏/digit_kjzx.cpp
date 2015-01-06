#include<sstream>
#include<fstream>
#include<string>
using namespace std;

ifstream fin("digit.in");
ofstream fout("digit.out");

void px(string &s)  //给S的每个字符排序
{
	char t;
	for (string::size_type ix=0; ix!=s.size()-1; ++ix)
	{
		for (string::size_type ij=ix+1; ij!=s.size(); ++ij)
		{
			if (s[ix]>s[ij])
			{
				t=s[ix]; s[ix]=s[ij]; s[ij]=t;
			}
		}
	}
}

int main()
{
	int N=0;
	int n=0, max=0;
	string s;
	stringstream strm;
	fin>>N;
	while (N--)
	{
		fin>>s; 
		px(s);
		strm<<s;
		strm>>n;
		strm.clear();
		if (max<n) {max=n;}
	}
	fout<<max<<endl;
	return 0;
}
