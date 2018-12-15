#include <stdio.h>
int main(void)
{
	int i,j,k,q,n,vb[101],vc[1001];
	scanf("%d %d",&n,&q);
	vb[0]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&vb[i]);
		vb[i]+=vb[i-1];
	}
	//for(i=0;i<=n;i++)
		//printf("%d ",vb[i]);
	//printf("\n");
	for(i=0;i<q;i++)
		scanf("%d",&vc[i]);
	for(i=0;i<q;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(vc[i]>=vb[j]&&vc[i]<vb[j+1])
			{
				printf("%d\n",j+1);
				break;
			}
		}
	}
}