#include <stdio.h>
int main(void)
{
	int i,j,k,vc[4],vb[2],sum=2,flag;
	for(i=0;i<4;i++)
		scanf("%d",&vc[i]);
	if(vc[0]>vc[2])
		vb[0]=vc[0]-vc[2];
	else
		vb[0]=vc[2]-vc[0];
	if(vc[1]>vc[3])
		vb[1]=vc[1]-vc[3];
	else
		vb[1]=vc[3]-vc[1];
	//printf("%d %d ",vb[0],vb[1]);
	if(vb[0]==0)
		sum=sum+vb[1]-1;
	if(vb[1]==0)
		sum=sum+vb[0]-1;
	if(vb[0]!=0&&vb[1]!=0)
	{
		for(i=20;i>0;i--)
		{
			if(vb[0]%i==0&&vb[1]%i==0)
			{
				flag=i;
				//printf("%d ",flag);
				break;
			}
		}
		sum=sum+flag-1;
	}
	printf("%d",sum);
}
