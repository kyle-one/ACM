#include <stdio.h>
int main(void)
{
	int vc[30][30],i,n,j;
	for(i=0;i<30;i++)
	{
		vc[i][0]=1;
		vc[i][i]=1;
	}
	for(i=2;i<30;i++)
		for(j=1;j<i;j++)
			vc[i][j]=vc[i-1][j]+vc[i-1][j-1];
	while(scanf("%d",&n)!=EOF)
	{

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
			printf("%d ",vc[i][j]);
		printf("\n");
	}
	printf("\n");
	}
}
