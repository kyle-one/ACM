#include <cstdio>
#include <algorithm>
using namespace std;
int f[5010][5010],ans;
int main(void)
{
	int n,m,c,r;
	scanf("%d%d",&n,&m);
	r=c=m;
	for(int i=1;i<=n;i++)
	{
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		x++;y++;
		f[x][y]=z;
		r=max(r,x);
		c=max(c,y);
	}
	//printf("%d %d\n",r,c);
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++)
			f[i][j]=f[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];
	for(int i=m;i<=r;i++)
		for(int j=m;j<=c;j++)
			ans=max(ans,f[i][j]-f[i][j-m]-f[i-m][j]+f[i-m][j-m]);
	printf("%d",ans);
	return 0;
}
