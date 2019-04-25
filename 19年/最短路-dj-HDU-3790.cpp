//先距离最小，如果距离相等则求花费最小
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int inf=0x3f3f3f3f;
typedef struct Edge{
	int a,b,k,w;
	Edge(int a=0,int b=0,int k=0,int w=0):a(a),b(b),k(k),w(w){}
}Edge;
vector<Edge> edge[1010];//记得开大
int dis[1010],money[1010];
typedef struct node{
	int id,k;
	node(int id=0,int k=0):id(id),k(k){}
	friend bool operator<(node a,node b)
		{return a.k>b.k;}
}node;
priority_queue<node> q;
void dj(int beg,int en)
{
	memset(dis,inf,sizeof(dis));
	memset(money,inf,sizeof(inf));
	while(!q.empty()) q.pop();
	q.emplace(node(beg,0));dis[beg]=0;money[beg]=0;
	while(!q.empty())
	{
		node s=q.top();q.pop();
		int id=s.id;
		if(dis[id]!=s.k) continue;
		for(int i=0;i<edge[id].size();i++)
		{
			if(dis[edge[id][i].b]>dis[id]+edge[id][i].k)
			{
				dis[edge[id][i].b]=dis[id]+edge[id][i].k;
				money[edge[id][i].b]=money[id]+edge[id][i].w;
				q.emplace(node(edge[id][i].b,dis[edge[id][i].b]));
			}
			else if(dis[edge[id][i].b]==dis[id]+edge[id][i].k)
				money[edge[id][i].b]=min(money[edge[id][i].b],money[id]+edge[id][i].w);
		}
	}
}

int main(void)
{
	int n,m,a,b,c,d,z1,z2;

	while(scanf("%d%d",&n,&m)!=EOF&&n&&m)
	{
	for(int i=0;i<=n;i++) edge[i].clear();
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		edge[a].emplace_back(Edge(a,b,c,d));
		edge[b].emplace_back(Edge(b,a,c,d));
	}
	scanf("%d%d",&z1,&z2);
	dj(z1,z2);
	printf("%d %d\n",dis[z2],money[z2]);
	}
	return 0;
}
