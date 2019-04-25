#include <stdio.h>
int main(void)
{
	int vc[1001]={1};
	int i,j,k,n,a,p=1,u=2;
	scanf("%d %d",&a,&n);
	vc[1]=a;
	while(1)
	{
		for(i=0;i<p;i++)
		{
			vc[u]=vc[p]+vc[i];
			u++;
		}
		p=u;
		u++;
		a*=a;
		vc[p]=a;
		if(u>10000)
			break;
	}
	for(i=0;i<15;i++)
		printf("%d ",vc[i]);
}

