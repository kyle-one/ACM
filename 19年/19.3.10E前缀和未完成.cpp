#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void)
{
	int i,j,k,sum,vc[10][10],n,va[10][10],t,m,x,y,a,b,c,max,flag=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d%d",&m,&n,&x,&y);
		for(i=0;i<10;i++)//¸Ä³É1001
		{
			vc[i][0]=0;
			vc[0][i]=0;
		}
		for(j=1;j<=m;j++)
			for(k=1;k<=n;k++)
				scanf("%d",&vc[j][k]);
		for(j=1;j<m;j++)
			for(k=1;j<n;k++)
			{
				vc[j][k]+=vc[j-1][k]+vc[j][k-1];
			}

