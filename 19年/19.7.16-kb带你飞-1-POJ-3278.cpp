#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <set>
using namespace std;
int a,b;
int vis[100010];
struct Node
{
	int s;int sum;
	Node(int s=0,int sum=0):s(s),sum(sum){};
};
queue<Node> que;
int bfs()
{
	que.push(Node(a,0));
	vis[a]=1;
	Node cur,next;
	while(!que.empty())
	{
		cur=que.front();
		que.pop();
		if(cur.s==b)
			return cur.sum;
		next.s=cur.s+1;next.sum=cur.sum+1;
		if(next.s>=0&&next.s<=100000&&!vis[next.s])
		{
			que.push(next);
			vis[next.s]=1;
		}
		next.s=cur.s-1;
		if(next.s>=0&&next.s<=100000&&!vis[next.s])
		{
			que.push(next);
			vis[next.s]=1;
		}
		next.s=cur.s*2;
		if(next.s>=0&&next.s<=100000&&!vis[next.s])
		{
			que.push(next);
			vis[next.s]=1;
		}
	}
	return 0;
}
int main(void)
{
	scanf("%d%d",&a,&b);
	memset(vis,0,sizeof(vis));
	int ans=bfs();
	printf("%d\n",ans);

}
/*

*/