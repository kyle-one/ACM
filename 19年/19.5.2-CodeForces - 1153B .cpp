#include <cstdio>
#include <algorithm>
using namespace std;
int vc[105][105];
int a[105],b[105];
int main(void)
{
	int x,y,h;
	scanf("%d%d%d",&x,&y,&h);
	for(int i=0;i<y;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<x;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			scanf("%d",&vc[i][j]);
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(vc[i][j])
				vc[i][j]=min(a[j],b[i]);
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
			printf("%d ",vc[i][j]);
		printf("\n");
	}
}

