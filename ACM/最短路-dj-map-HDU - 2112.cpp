#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
const int inf=0x3f3f3f3f;
map<string,int> str2int;//不存在的map初始值为0
map<int,string> int2str;
string z1,z2;
typedef struct Edge{
	int a,b,w;
	Edge(int a=0,int b=0,int w=0):a(a),b(b),w(w){}
}Edge;
typedef struct node{
	int id,w;
	node(int id=0,int w=0):id(id),w(w){}
	friend bool operator<(node a,node b)
	{	return a.w>b.w;	}
}node;
vector<Edge> edge[155];//记得开大
int dis[155];
priority_queue<node> q;
void dj(int beg)
{
	memset(dis,inf,sizeof(dis));
	while(!q.empty()) q.pop();
	q.emplace(node(beg,0));dis[beg]=0;
	while(!q.empty())
	{
		node s=q.top();q.pop();int id=s.id;
		if(dis[id]!=s.w) continue;
		for(int i=0;i<edge[id].size();i++)
		{
			if(dis[edge[id][i].b]>dis[id]+edge[id][i].w)
			{
				dis[edge[id][i].b]=dis[id]+edge[id][i].w;
				q.emplace(node(edge[id][i].b,dis[edge[id][i].b]));
			}
		}
	}
}

int main(void)
{
	int n,cnt=0;
	while(scanf("%d",&n)&&n!=-1)
	{
		str2int.clear();int2str.clear();
		for(int i=0;i<=153;i++)edge[i].clear();
		string a,b;int w;
		cnt=0;
		cin>>z1>>z2;
		if(!str2int[z1]){str2int[z1]=cnt;int2str[cnt++]=z1;}
		if(!str2int[z2]){str2int[z2]=cnt;int2str[cnt++]=z2;}
		for(int i=0;i<n;i++){
			cin>>a>>b>>w;
			if(!str2int[a]){str2int[a]=cnt;int2str[cnt++]=a;}
			if(!str2int[b]){str2int[b]=cnt;int2str[cnt++]=b;}
			edge[str2int[a]].emplace_back(Edge(str2int[a],str2int[b],w));
			edge[str2int[b]].emplace_back(Edge(str2int[b],str2int[a],w));
		}
		dj(str2int[z1]);
		if(z1==z2)
			cout<<"0"<<endl;
		else if(dis[str2int[z2]]!=inf)cout<<dis[str2int[z2]]<<endl;
		else cout<<"-1"<<endl;
	}
}
//一开始错误原因：从z1z2之后才开始存map，而忽略了z1和z2不在后续数据中的情况
			


