#include <cstdio>
#include <algorithm>
//
int vc[505][505];
int main(void)
{
	int x,y;//3 2
	scanf("%d%d",&x,&y);
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			scanf("%d",&vc[i][j]);
	int sum=vc[1][1];
	for(int i=2;i<=x;i++)
		sum^=vc[i][1];
	int flag1=0,flag2=0;
	if(sum!=0)
	{
		printf("TAK\n");
		for(int i=1;i<=x;i++)
			printf("1 ");
	}
	else{
		for(int i=1;i<=x;i++){
			int flag=0;
			for(int j=1;j<=y;j++)
				if(vc[i][j]!=vc[i][1]){
					flag1=i;flag2=j;flag=1;break;}
				if(flag==1) break;}
	//printf("sum:%d\n",sum);
//	printf("a:%d b:%d ",flag1,flag2);
	if(flag1==0)
		printf("NIE");
	else{
		printf("TAK\n");
		for(int i=1;i<flag1;i++)
			printf("1 ");
		printf("%d ",flag2);
		for(int i=flag1+1;i<=x;i++)
			printf("1 ");
	}
	}
}