
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;
char vc[35][35][35];
int a,b,c;
int begindot[3],enddot[3];
int vis[35][35][35];
int fang[6][3]={{0,0,1},{0,0,-1},{1,0,0},\
{-1,0,0},{0,1,0},{0,-1,0}};
struct node{
	int a,b,c,sum;
}h;
queue <node> que;

int bfs()
{
	while(!que.empty())
		que.pop();
	h.a=begindot[0];h.b=begindot[1];h.c=begindot[2];
	h.sum=0;
	que.push(h);
	vis[h.a][h.b][h.c]=1;
	node cur,next;
	while(!que.empty())
	{
		cur=que.front();
		que.pop();
		if(cur.a==enddot[0]&&cur.b==enddot[1]&&cur.c==enddot[2])
			return cur.sum;
		for(int i=0;i<6;i++)
		{
			next.a=cur.a+fang[i][0];
			next.b=cur.b+fang[i][1];
			next.c=cur.c+fang[i][2];
			next.sum=cur.sum+1;
			if(vc[next.a][next.b][next.c]!='#'&&!vis[next.a][next.b][next.c])
			{
				que.push(next);
				vis[next.a][next.b][next.c]=1;
			}
		}
	}
	return 0;
}

int main(void)
{
	while(scanf("%d%d%d",&a,&b,&c)&&a&&b&&c)
	{
		memset(vis,0,sizeof(vis));
		//忘记初始化了，找了你好久！
		for(int i=0;i<=a+1;i++)
			for(int j=0;j<=b+1;j++)
				for(int k=0;k<=c+1;k++)
				{
					vc[0][j][k]='#';
					vc[a+1][j][k]='#';
					vc[i][0][k]='#';
					vc[i][b+1][k]='#';
					vc[i][j][0]='#';
					vc[i][j][c+1]='#';
				}
		for(int i=1;i<=a;i++)
		{
			getchar();
			for(int j=1;j<=b;j++)
			{
				for(int k=1;k<=c;k++)
				{
					scanf("%c",&vc[i][j][k]);
					if(vc[i][j][k]=='S')
					{
						begindot[0]=i;
						begindot[1]=j;
						begindot[2]=k;
					}
					if(vc[i][j][k]=='E')
					{
						enddot[0]=i;
						enddot[1]=j;
						enddot[2]=k;
					}
				}
				getchar();
			}
		}
		int sum=bfs();
		if(sum)
			printf("Escaped in %d minute(s).\n",sum);
		else
			printf("Trapped!\n");
	}
	return 0;
}