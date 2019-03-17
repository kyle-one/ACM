#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int map[101][101];//读入地图
int dp[101][101];//结果
int n,m;//长宽
int ax[4]={0,0,1,-1};
int ay[4]={1,-1,0,0};


int f(int x,int y)//起点坐标
{
	int i,j,k,mx=0,dx,dy,t;
	if(dp[x][y])
		return dp[x][y];
	for(i=0;i<4;i++)
	{
		dx=x+ax[i];
		dy=y+ay[i];
		if(dx<0||dx>=n||dy<0||dy>=m)
			continue;
		if(map[dx][dy]<map[x][y])
		{
			t=f(dx,dy);
			if(t>mx)
				mx=t;
		}
	}
	dp[x][y]=mx+1;
	return dp[x][y];

}
int main(void)
{
	int i,j,k,mx=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cin>>map[i][j];//地图读入正确
		}

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			dp[i][j]=f(i,j);
			if(dp[i][j]>mx)
				mx=dp[i][j];
		}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",dp[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",map[i][j]);
		printf("\n");
	}*/
	cout<<mx<<endl;
	return 0;
}

