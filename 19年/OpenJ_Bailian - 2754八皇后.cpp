#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
int vc[93][8],queenPos[100],N,flag=0;

void queen(int k)
{
	int i,j;
	if(k==8)
	{
		for(i=0;i<8;i++)
			vc[flag][i]=queenPos[i];
		flag++;
		return;
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<k;j++)
		{
			if(queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
				break;
		}
		if(j==k)
		{
			queenPos[k]=i;
			queen(k+1);
		}
	}
}
int main(void)
{
	int n,i,j,a;
	scanf("%d",&n);
	queen(0);
	while(n--)
	{
		scanf("%d",&a);
		
		for(i=0;i<8;i++)
			printf("%d",vc[a-1][i]+1);
		printf("\n");
	}
}





