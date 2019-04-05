#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int i,j,k,a,b,c,d,n,x,y,A,B,T;
int vis[105][105];
struct bei
{
	int a;
	int b;
	int ans;
	bei(int aa,int bb,int cc)
	{
		a=aa;
		b=bb;
		ans=cc;
	}
}now(0,0,0),next1(0,0,0);
queue<bei> vc;

void cclear()
{
	while(!vc.empty())
		vc.pop();
}
//0 5  5 0  5 5  6 4
int bfs()
{
	vis[0][0]=1;
	vc.push(bei(0,0,0));
	while(!vc.empty())
	{
		now=vc.front();
		x=now.a;
		y=now.b;
		//printf("now=%d %d\n",x,y);
		vc.pop();//粟堤賸
		for(i=1;i<=6;i++)
		{
			
			switch(i)
			{
			case 1:a=0;b=y;break;//a給裁
			case 2:a=x;b=0;break;//b給裁
			case 3:a=A;b=y;break;//a給雛
			case 4:a=x;b=B;break;//b給雛
			//case 5:a=x+y>=B?x+y-B:0;b=x+y>=B?B:x+y;break;//a給�螖
			//case 6:b=x+y>=A?x+y-A:0;a=x+y>=A?A:x+y;break;
			case 5:if(x+y>=B)//a->b
				   {a=x+y-B;b=B;}
				   else
				   {a=0;b=x+y;}break;
			case 6:if(x+y>=A)//b->a
				   {a=A;b=x+y-A;}
				   else
				   {b=0;a=x+y;}break;
			}
			if(!vis[a][b])
			{
				vis[a][b]=1;
				next1=bei(a,b,now.ans+1);
				//printf("[%d][%d][%d]\n",a,b,next1.ans);
				if(x==T||y==T)
					return next1.ans;
				vc.push(next1);
			}
		}
	}
	return 0;
}
int main(void)
{

	while(scanf("%d%d%d",&A,&B,&T)!=EOF)
	{
		memset(vis,0,sizeof(vis));
		cclear();
		c=bfs();
		if(c!=0)
			printf("%d\n",c-1);
		else
			printf("impossible\n");
	}
	return 0;
}



