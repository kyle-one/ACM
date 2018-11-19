#include <stdio.h>
int main(void)
{
	int n,m,vc[100],i,j;
	while(scanf("%d %d",&n,&m)&&(n||m))
	{
	for(i=0;i<n;i++)
		scanf("%d",&vc[i]);
	for(i=0;i<n;i++)
	{
		if(m<vc[i])
			break;
	}
	for(j=0;j<i;j++)
		printf("%d ",vc[j]);
	printf("%d",m);
	for(j=i;j<n;j++)
		printf(" %d",vc[j]);
	printf("\n");
	}
	return(0);
}
