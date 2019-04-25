#include <stdio.h>
int main(void)
{
	int vc[12][12],i,j,k,n;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<12;i++)
	{
		vc[i][i]=1;
		vc[i][0]=1;
	}
	for(i=2;i<12;i++)
		for(j=1;j<i;j++)
			vc[i][j]=vc[i-1][j]+vc[i-1][j-1];
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
			printf(" ");
		for(j=0;j<n-i;j++)
			printf("%d ",vc[n-i-1][j]);
		printf("\n");
	}
	printf("\n");
	}
}



