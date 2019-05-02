#include <stdio.h>
struct zuo
{
	int x;
	int y;
}zuobiao[101],tmp;
int main(void)
{
	int n,m,x,y,vc[101][101],i,j,k,sum,shu,flag=0;//shu为懒羊羊的数字
	scanf("%d%d%d%d",&m,&n,&x,&y);//i,x,m为横
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&vc[i][j]);
	/*for(i=0;i<n;i++)//4
	{
		for(j=0;j<m;j++)//3
			printf("%d ",vc[i][j]);
		printf("\n");
	}*/

	shu=vc[x-1][y-1];
	//printf("%d \n",shu);
	for(i=0;i<n;i++)//3
		for(j=0;j<m;j++)//4
			if(shu==vc[i][j]&&(i!=x-1||j!=y-1))
			{
				zuobiao[flag].x=i;
				zuobiao[flag++].y=j;
				//printf("%d %d\n",i,j);
			}
	for(i=flag-1;i>0;i--)
		for(j=0;j<i;j++)
			if(zuobiao[j].y>zuobiao[j+1].y)
			{
				tmp=zuobiao[j];
				zuobiao[j]=zuobiao[j+1];
				zuobiao[j+1]=tmp;
			}
	for(i=flag-1;i>0;i--)
		for(j=0;j<i;j++)
			if(zuobiao[j].x>zuobiao[j+1].x)
			{
				tmp=zuobiao[j];
				zuobiao[j]=zuobiao[j+1];
				zuobiao[j+1]=tmp;
			}
			printf("%d %d",zuobiao[0].x+1,zuobiao[0].y+1);
}





