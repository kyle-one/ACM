#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,k,cnt=0;
char vc[9][9];
int a[10];
void dfs(int x,int tmp)
{
	if(tmp==k){
		cnt++;return;}
	if(x>n) return;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=1&&vc[x][i]=='#')
		{
			a[i]=1;
			dfs(x+1,tmp+1);
			a[i]=0;
		}
	}
	dfs(x+1,tmp);
}

int main(void)
{
	while(scanf("%d%d",&n,&k)&&k!=-1&&n!=-1)
	{
		memset(vc,0,sizeof(vc));
		memset(a,0,sizeof(a));
		cnt=0;
		getchar();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				scanf("%c",&vc[i][j]);
			getchar();
		}
		dfs(0,0);
		printf("%d\n",cnt);
	}
	return 0;
}

