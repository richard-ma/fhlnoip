#include<fstream>
using namespace std;

ifstream fin("a.in");
ofstream fout("a.out");

int main()
{
	int n, m, t=0, nc=0, mc=0;
	fin>>n>>m;
	while (n--)
	{	fin>>t; nc+=t;}
	while (m--)
	{	fin>>t; mc+=t;}
	if (nc>mc)
	{	fout<<1;}
	else if (mc>nc)
	{	fout<<2;}
	else
	{	fout<<0;}
	return 0;
}
