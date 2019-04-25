#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 5;
vector<int> fu[maxn];//记得开大！
int w,h,n;
int vis[maxn],f[4];
//int vis[maxn],f[4];
int i,j,k,t,ans,cnt,ansi,next1,now;
//int i,j,k,w,h,n,f[4],t,vis[maxn],now,next1,cnt,ans,ansi;//f记录哪个角被覆盖
struct zbb//zb=坐标
{
	int x1,x2,y1,y2;//1表示左下角坐标，2表示右上角坐标
}zb[maxn];
int pan(struct zbb a,struct zbb b,int k)//判断是否被覆盖，哪一个角被覆盖
{
	bool flag=1;
	if(a.x2>b.x1&&a.x2<=b.x2&&a.y2>b.y1&&a.y2<=b.y2)f[1]=k;//右上角被覆盖
	if(a.x1>=b.x1&&a.x1<b.x2&&a.y2>b.y1&&a.y2<=b.y2)f[2]=k;//左上
	if(a.x1>=b.x1&&a.x1<b.x2&&a.y1>=b.y1&&a.y1<b.y2)f[3]=k;//左下
	if(a.x2>b.x1&&a.x2<=b.x2&&a.y1>=b.y1&&a.y1<b.y2)f[4]=k;//右下
	if(a.x2<=b.x1||a.y1>=b.y2||a.x1>=b.x2||a.y2<=b.y1) flag=0;//不遮住角，但是覆盖
	return flag;//如果被覆盖则返回1
}
int main(void)
{
	while(~scanf("%d%d%d",&w,&h,&n))
	{
		memset(f,0,sizeof(f));
		ans=0;
		ansi=0;
		for(i=1;i<=n;i++)
			scanf("%d%d%d%d",&zb[i].x1,&zb[i].y1,&zb[i].x2,&zb[i].y2);
		for(i=n;i>=1;i--)//从最后一张纸开始检索
		{
			//printf("i=%d\n",i);
			cnt=1;
			memset(vis,0,sizeof(vis));
			for(j=n;j>i;j--)
				if(pan(zb[i],zb[j],i))
					fu[i].emplace_back(j);//记得覆盖纸的下标
			t=0;
			for(j=1;j<=4;j++)//判断几个角被覆盖
				if(f[j]==i)
					t++;
			if(t==4)
				continue;//如果四个角都被覆盖
			queue<int> q;
			q.emplace(i);
			vis[i]=1;//标记哪一张纸被看过
			while(!q.empty())//开始广搜
			{
				now=q.front();
				q.pop();
				for(j=0;j<fu[now].size();j++)
				{
					next1=fu[now][j];
					if(!vis[next1])//这张纸还没被搜过
					{
						q.emplace(next1);
						vis[next1]=1;
						cnt++;
					}
				}
			}
			if(cnt>=ans)
			{
				ans=cnt;
				ansi=i;
			}
		}
		for(i=1;i<=n;i++)
			fu[i].clear();
		printf("%d %d\n",ans,ansi);
	}
	return 0;
}
