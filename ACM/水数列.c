#include <stdio.h>
int main(void)
{
	int vc[10001]={1};
	int i,j,k,n,a,p=1,u=2,b;
	scanf("%d %d",&a,&n);
	vc[0]=1;
	vc[1]=a;
	b=a;
	while(u<1000)
	{
		for(i=0;i<p;i++)
		{
			vc[u]=vc[p]+vc[i];
			u++;
		}
		p=u;
		u++;
		b*=a;
		vc[p]=b;
	}
	printf("%d",vc[n-1]);
}

