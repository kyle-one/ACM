#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int vis[25][25];
char mp[25][25];
int sx,sy;
int ans=0;
int n,m;
int dt[][2]={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(int x,int y)
{
	if(vis[x][y])
		return;
	 vis[x][y]=1;
	 ans++;
	 for(int i=0;i<4;i++)
	 {
		 int tx=x+dt[i][0];
		 int ty=y+dt[i][1];
		 if(mp[tx][ty]=='.')
			 dfs(tx,ty);
	 }
}
int main(void)
{
	while(scanf("%d%d",&n,&m)&&n&&m)
	{
		ans=0;
		memset(vis,0,sizeof(vis));
		memset(mp,'#',sizeof(mp));
		getchar();
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%c",&mp[i][j]);
				if(mp[i][j]=='@')
					sx=i,sy=j;
			}
			getchar();
		}
		dfs(sx,sy);
		printf("%d\n",ans);
	}
	return 0;
}


