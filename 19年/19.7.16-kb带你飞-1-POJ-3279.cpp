#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int a,b,mp[17][17];
int mp1[17][17];
int fl[17][17];
int sum=9999999,ans[17][17],sum1=0;
void fan(int a,int b)
{
	mp[a][b]=mp[a][b]^1;
	mp[a][b+1]=mp[a][b+1]^1;
	mp[a][b-1]=mp[a][b-1]^1;
	mp[a-1][b]=mp[a-1][b]^1;
	mp[a+1][b]=mp[a+1][b]^1;
}
int main(void)
{
	int flag=0;
	memset(ans,0,sizeof(ans));
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
		{
			scanf("%d",&mp[i][j]);
			mp1[i][j]=mp[i][j];
		}
	for(int i=0;i<1<<b;i++)
	{
		sum1=0;
		memset(fl,0,sizeof(fl));
		memcpy(mp,mp1,sizeof(mp1));
		for(int j=0;j<b;j++)
		{
			fl[1][b-j]=i>>j&1;
			if(fl[1][b-j]==1)
			{
				fan(1,b-j);
				sum1++;
			}
		}
		int flag=0;
		for(int j=2;j<=a;j++)
			for(int k=1;k<=b;k++)
			{
				if(mp[j-1][k]==1)
				{
					fan(j,k);
					fl[j][k]+=1;
					sum1++;
				}
			}
		/*for(int j=1;j<=a;j++)
		{
			for(int k=1;k<=b;k++)
				printf("%d ",fl[j][k]);
			printf("\n");
		}
		printf("\n");*/

		for(int j=1;j<=b;j++)
			if(mp[a][j]==1)
				flag=1;
		if(flag==0&&sum1<sum)
		{
			sum=sum1;
			memcpy(ans,fl,sizeof(fl));
		}
	}
	if(sum<=99999)
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
				printf("%d ",ans[i][j]);
			printf("\n");
		}
	else
		printf("IMPOSSIBLE\n");
		
}





	