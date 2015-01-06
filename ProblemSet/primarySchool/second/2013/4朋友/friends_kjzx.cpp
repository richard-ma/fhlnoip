#include<fstream>
#include<queue>
#include <cstring>
using namespace std;

ifstream fin("friends.in");
ofstream fout("friends.out");

struct F
{
	int x, y, r;
};
int h[510];
int main()
{
	int N, M, i=1, room=1, t=0;
	fin>>N>>M;
	queue<int> que;
	memset(h, 0, sizeof(h));
	F frd[M+2];
	for (i=1; i<=M; ++i)
	{
		fin>>frd[i].x>>frd[i].y;
		frd[i].r=0;
	}
	frd[1].r=room;
	h[frd[1].x] = h[frd[1].y] = room;
	que.push(frd[1].x); que.push(frd[1].y);
	while (!que.empty())
	{
		t=que.front();
		que.pop();
		for (i=2; i<=M; ++i)
		{
			if (t==frd[i].x && frd[i].r==0)
			{
				que.push(frd[i].y);
				frd[i].r=room;
				h[frd[i].y] = room;
			}
			else if (t==frd[i].y && frd[i].r==0)
			{
				que.push(frd[i].x);
				frd[i].r=room;
				h[frd[i].x] = room;
			}
		}
		
		if (que.empty())
		{
			for (int j=2; j<=M; ++j)
			{
				if (frd[j].r==0)
				{
					room++;
					que.push(frd[j].x); que.push(frd[j].y); frd[j].r=room;
					h[frd[j].x] = h[frd[j].y] = room;
					break;
				}
			}
		}
	}
	for(int i = 1;i <= N; ++i)
		if(!h[i]) room ++;
	fout<<room<<endl;
	return 0;
}
