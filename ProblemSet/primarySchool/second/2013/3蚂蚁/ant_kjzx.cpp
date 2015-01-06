#include<fstream>
using namespace std;

ifstream fin("ant.in");
ofstream fout("ant.out");

typedef struct an
{
	int C, L, R;
	an(): C(0), L(0), R(0) {}
} Ant;

int main()
{
	int L=0, N=0, max=0, min=0;
	fin>>L>>N;
	Ant ant[N+1];
	for (int i=1; i<=N; ++i)
	{
		fin>>ant[i].C;
		ant[i].L=ant[i].C;
		ant[i].R=L-ant[i].C;
		ant[i].C=(ant[i].L<ant[i].R)?ant[i].L:ant[i].R;
		if (min<ant[i].C) {min=ant[i].C;}
		ant[i].C=(ant[i].L>ant[i].R)?ant[i].L:ant[i].R;
		if (max<ant[i].C) {max=ant[i].C;}
	}
	fout<<min<<" "<<max<<endl;
	return 0;
}
