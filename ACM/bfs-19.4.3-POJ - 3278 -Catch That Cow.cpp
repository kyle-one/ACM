#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
struct Step{
	int x;
	int steps;
	//Step(int xx,int s):x(xx),steps(s){} or
	Step(int xx,int s)
	{
		x=xx;
		steps=s;
	}
};
queue<Step> q;
int n,k;
int visited[100010];
int main(void)
{
	scanf("%d %d",&n,&k);
	memset(visited,0,sizeof(visited));
	q.push(Step(n,0));
	visited[n]=1;
	while(!q.empty())
	{
		Step s=q.front();
		if(s.x==k)
		{
			printf("%d\n",s.steps);
			return 0;
		}
		else
		{
			if(s.x-1>=0&&!visited[s.x-1])
			{
				q.push(Step(s.x-1,s.steps+1));
				visited[s.x-1]=1;
			}
			if(s.x+1<=100000&&!visited[s.x+1])
			{
				q.push(Step(s.x+1,s.steps+1));
				visited[s.x+1]=1;
			}
			if(s.x*2<=100000&&!visited[s.x*2])
			{
				q.push(Step(s.x*2,s.steps+1));
				visited[s.x*2]=1;
			}
			q.pop();
		}
	}
	return 0;
}
