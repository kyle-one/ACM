#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,m,vc[26],point=0;
void dfs(int x)
{
	if(point==m)
	{
		for(int i=0;i<m;i++)
			printf("%d ",vc[i]);
		printf("\n");
		return;
	}
	for(int i=x;i<=n;i++)
	{
		vc[point++]=i;
		dfs(i+1);
		vc[point--]=0;
	}
}

int main(void)
{
	scanf("%d%d",&n,&m);
	dfs(1);
	return 0;
}
