#include<fstream>
#include<string>
using namespace std;

ifstream fin("d.in");
ofstream fout("d.out");
//下列函数返回一个回文字符串的长度，如不是回文串，返回零
int hw(string s)
{
	int r=s.size();
	if (s.empty()) { return 0;}
	for (string::size_type ib=0, ie=s.size()-1; ib<=ie; ++ib, --ie)
	{
		if (s[ib]!=s[ie])
		{r=0; break;}
	}
	return r;
}

int main()
{
	int as=0, t=0;
	string s, sr;
	fin>>s;
	for (string::size_type i=0; i<s.size()-1; ++i)
	{
		for (string::size_type j=s.size()-i; j>0; --j)
		{
			sr=s.substr(i, j); t=hw(sr);//取子串，并返回回文串的长度到t.
			as=as<t?t:as; //if (as<t) {as=t;}
		}
	}
	fout<<as;
	return 0;
}
