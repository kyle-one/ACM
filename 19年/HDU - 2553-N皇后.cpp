#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
int queenPos[100],N,flag=0,sum=0,sum1[50];

void queen(int k,int N)
{
	int i,j;
	if(k==N)
	{
		sum++;
		return ;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<k;j++)//与之前的储存的j个皇后对比
		{
			if(queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
				break;
		}
		if(j==k)
		{
			queenPos[k]=i;
			queen(k+1,N);
		}
	}
}
int main(void)
{
	int n,i,j,a;
	for(i=1;i<11;i++)
	{
		sum=0;
		queen(0,i);
		sum1[i]=sum;
	}
	while(scanf("%d",&a)!=EOF&&a!=0)
	{
		printf("%d\n",sum1[a]);
	}
	//queen(0,8);
	//printf("%d",sum);
}





