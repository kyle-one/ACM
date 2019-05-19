#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int vc[21][21];
int f[1<<20][21];
int main(void)
{
	int n;
	memset(f,0x3f,sizeof(f));
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&vc[i][j]);
	f[1][0]=0;
	for(int i=1;i<(1<<n);i++)
		for(int j=0;j<n;j++)
			if(i>>j&1)
				for(int k=0;k<n;k++)
					if((i^(1<<j)>>k&1))
						f[i][j]=min(f[i][j],f[i^(1<<j)][k]+vc[k][j]);
	printf("%d",f[(1<<n)-1][n-1]);
}