#include<stdio.h>
int abc(unsigned long long int n,unsigned int *vc,int *len)
{
	int i=0,a=n;
	while(a>0)
	{
		vc[i]=a%2;
		a/=2;
		i++;
	}
	*len=i;
}


int main(void)
{
	int sum=0;
	int i,a,b;
	unsigned int vc[33];
	unsigned long long int   n;
	while(scanf("%d",&n)!=EOF)
	{
		b=0;
		for(i=0;i<32;i++)
		{
			vc[i]=n%2;
			n/=2;
		}
		for(i=0;i<17;i++)
		{
			if(vc[i]!=vc[32-i-1])
			{
				b=1;
				break;
			}
		}
		if(b==0)
			sum++;
	}
	printf("%d\n",sum);
}