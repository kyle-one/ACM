#include <stdio.h>
int main(void)
{
	int a,b,vc[11][11],vb[101],i,j,k,sum=0,flag,tmp,flag2,sum3=0;
	double sum1;
	//freopen("D:\\4.txt","r",stdin);
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			scanf("%d",&vc[i][j]);
	for(i=0;i<b;i++)
		for(j=a-1;j>0;j--)
		{
			flag=0;
			for(k=0;k<j;k++)
			{
				if(vc[k][i]<vc[k+1][i])
				{
					tmp=vc[k][i];
					vc[k][i]=vc[k+1][i];
					vc[k+1][i]=tmp;
					flag=1;
				}
			}
			if(flag==0)
				break;
		}
	for(i=0;i<b;i++)
		printf("%d\n",vc[0][i]);
	flag=0;
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			vb[flag++]=vc[i][j];
	/*for(i=0;i<flag;i++)
		printf("%d ",vb[i]);*/
	flag2=0;
	for(i=flag-1;i>0;i--)
	{
		flag2=0;
		for(j=0;j<i;j++)
		{
			if(vb[j]<vb[j+1])
			{
				tmp=vb[j];
				vb[j]=vb[j+1];
				vb[j+1]=tmp;
				flag2=1;
			}
		}
		if(flag==0)
			break;
	}
	for(i=0;i<flag;i++)
		printf("%d ",vb[i]);
	for(i=0;i<flag;i++)
		sum+=vb[i];
	a=a*b;
	sum1=(double)sum/(double)a;
	sum=(int)(sum1+0.5);
	printf("\n%d",sum);
	for(i=0;i<flag;i++)
		if(vb[i]>=sum)
			sum3++;
	printf("\n%d",sum3);

}
