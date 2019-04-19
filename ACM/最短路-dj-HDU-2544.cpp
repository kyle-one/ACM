#include <cstdio>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int inf=0x3f3f3f3f;
struct Edge
{
	int u,v,w;
	Edge(int u=0,int v=0,int w=0):u(u),v(v),w(w){}
};
vector<Edge> edge[120];//记得开大
int dis[120];

struct node
{
	int id,w;
	node(int id=0,int w=0):id(id),w(w){}
	friend bool operator<(node a,node b)
	{
		return a.w>b.w;}//注意大小符号是相反的！！！
};
priority_queue<node> q;
void dj(int beg)
{
	memset(dis,inf,sizeof(dis));//初始化dis
	while(!q.empty()) q.pop();//初始化q
	q.push(node(beg,0));dis[beg]=0;
	while(!q.empty())
	{
		node s=q.top();q.pop();
		int id=s.id;
		//if(dis[id]!=s.w) continue;
		for(int i=0;i<edge[id].size();i++)
		{
			if(dis[edge[id][i].v]>dis[id]+edge[id][i].w)
			{
				dis[edge[id][i].v]=dis[id]+edge[id][i].w;
				q.emplace(node(edge[id][i].v,dis[edge[id][i].v]));
			}
		}
	}
}
int main(void)
{
	int n,m,a,b,c;
	while(scanf("%d%d",&n,&m)&&n&&m)
	{
		for(int i=0;i<=n;i++)
			edge[i].clear();
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			edge[a].emplace_back(Edge(a,b,c));
			edge[b].emplace_back(Edge(b,a,c));
		}
		dj(1);
		printf("%d\n",dis[n]);

	}
	return 0;
}

