#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,order[12],vis[12];
void dfs(int x)//x代表第几层
{
	if(x==n+1){
		for(int i=1;i<=n;i++)
			printf("%d ",order[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		order[x]=i;
		dfs(x+1);
		order[x]=0;vis[i]=0;
	}
}
int main(void)
{
	memset(vis,0,sizeof(vis));
	scanf("%d",&n);
	dfs(1);
}