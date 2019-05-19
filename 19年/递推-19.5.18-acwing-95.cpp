#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int vc[6][6];int chu[6][6];
int dx[6]={0,1,-1,0,0},dy[6]={0,0,0,1,-1};
int ans=0x3f3f3f;
void turn(int x,int y)
{
	for(int i=0;i<5;i++)
	{
		int a=x+dx[i],b=y+dy[i];
		if(a>=0&&a<5&&b>=0&&b<5)
			vc[a][b]^=1;
	}
}
int dfs()
{
	for(int i=0;i<(1<<5);i++)
	{
		int res=0;
		memcpy(vc,chu,sizeof(chu));
		for(int j=0;j<5;j++)
			if(i>>j&1)
			{
				turn(0,j);
				res++;
			}
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<5;k++)
			{
				if(!vc[j][k])
				{
					res++;
					turn(j+1,k);
				}
			}
		}
		int flag=0;
		for(int i=0;i<5;i++)
			if(vc[4][i]==0){flag=1;break;}
		if(flag==0) ans=min(ans,res);
	}
	if(ans>6)
		return -1;
	else
	return ans;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		ans=0x3f3f3f;
		getchar();
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			char ch=getchar();
			chu[i][j]=ch-'0';
		}
		getchar();
	}
	/*for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			printf("%d",chu[i][j]);
		printf("\n\n");
	}*/
	printf("%d\n",dfs());
	}
}



