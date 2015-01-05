#include<fstream>
using namespace std;

ifstream fin("quake.in");
ofstream fout("quake.out");

#define nmax 50

typedef struct line
{
	int u, v, w;
} road;

typedef struct node
{
	int f;
} village;

int queue[nmax], front=0, rear=0;

int main()
{
	int n,m, zj, max_zj=0; road L[200]; village V[50];
	fin>>n>>m;
	for (int i=1; i<=m; i++)
	{
		fin>>L[i].u>>L[i].v>>L[i].w;
		if (max_zj<L[i].w) max_zj=L[i].w;
	}
	
	zj=max_zj; int vk;
	while (zj>=1)
	{
		for (int i=1; i<=n; i++)
		{
			V[i].f=0;
		}
		V[1].f=1;
		queue[rear]=1;
		rear=(rear+1)%nmax;
		while (front!=rear)
		{
			vk=queue[front]; front=(front+1)%nmax;
			for (int i=1; i<=m; i++)
			{
				//如果村庄数是L[i].u并且震级>=zj并且这个庄没走过
				if (vk==L[i].u && L[i].w>=zj && V[L[i].v].f==0)
				{
					//与L[i].u相连的村庄入队
					queue[rear]=L[i].v; rear=(rear+1)%nmax;
					V[L[i].v].f=1;//村庄标记为走过
				}
				//路是双向的，过虑给定的数据是反过来给的
				else if (vk==L[i].v && L[i].w>=zj && V[L[i].u].f==0)
				{
					//与L[i].v相连的村庄入队
					queue[rear]=L[i].u; rear=(rear+1)%nmax;
					V[L[i].u].f=1;//村庄标记为走过
				}
			}
		}
		if (V[n].f==1)
		{fout<<zj<<endl; break;}
		else
		{zj--;}
	}
	return 0;
}
