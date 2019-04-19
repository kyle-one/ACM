//Dijkstra
/*Dijkstra优先队列的优化，运用了重载函数可以优先使最大值或者最小值
出队列的原理进行优化，节省了大量的空间和时间，主体思路为用vector分别
存储边和权，用结构体中的元素做跳板，操作过程为，先将起点放入优先队列（先放到结构体中）， 
然从该点开始找它可以松弛的点，然后全部暂时存到结构体中，然后放入优先队列中，
然后将起点拿出，优先队列自动接着会吧最小的拿出来进行松弛，直到队列为空，
注意，一个点只能入队一次*/ 
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;
const int size=105;
const int inf=0x3f3f3f3f;
struct Edge{
	int u,v,w;
	Edge(int u=0,int v=0,int w=0):u(u),v(v),w(w){} //储存：起点，终点，权值
}; 
struct node{
	int id,w;
	node(int id=0,int w=0):id(id),w(w){}//储存：每个点和它到起点的最小路径
	friend bool operator<(node a,node b)
	{
		return a.w>b.w;//自定义结构体的优先级
	} 
};
priority_queue<node> q;//创建一个优先数列
vector<Edge> edge[size];//图
int dis[size],vis[size];
void Dijkstra(int beg)
{
	memset(dis,inf,sizeof(dis));
	memset(vis,0,sizeof(vis));//初始化vis和dis
	while(!q.empty()) 
		q.pop();//对优先数列q初始化
	q.push(node(beg,0)),dis[beg]=0;//队列中加入beg,并且
	while(!q.empty())
	{
		node s=q.top();//每次取距离起点最近的点 
		q.pop();//弹出这个元素
		int id=s.id;
		if(dis[id]!=s.w)//???//dis[1]=0,s.w=0,
			continue;
		for(int i=0;i<edge[id].size();i++)
		{
			if(dis[edge[id][i].v]>dis[id]+edge[id][i].w)//下一个坐标的dis大于当前坐标的dis+下个坐标的w
			{
				dis[edge[id][i].v]=dis[id]+edge[id][i].w;
				q.push(node(edge[id][i].v,dis[edge[id][i].v]));
			}
		}
	}
}
int main()
{
	int n,m;
	while(cin>>n>>m&&n)
	{
		int i,u,v,w;
		for(i=1;i<=n;i++) edge[i].clear(); //
		for(i=0;i<m;i++)
		{
			scanf("%lld%lld%lld",&u,&v,&w);
			edge[u].push_back(Edge(u,v,w));//为每个edge[起点]添加一个组
			edge[v].push_back(Edge(v,u,w));//反方向再来一次
		}
		Dijkstra(1);//以1为起点开始搜素
		cout<<dis[n]<<endl;
	}
	return 0;
}