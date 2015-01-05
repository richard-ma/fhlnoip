#include<fstream>
using namespace std;

ifstream fin("fruit.in");
ofstream fout("fruit.out");

int main()
{
	int x, y, z;
	fin>>x>>y>>z;
	fout<<x+y+z-2<<endl;
	return 0;
}
