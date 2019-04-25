#include <stdio.h>
int main(void)
{
	int n,z,sum,i;
	z=1;sum=0;
	scanf("%d",&n);
	for(i=7;i<=n;i++)
	{
		if(i%7==0)
			sum++;
		else{
			z=1;
			while(1)
			{
				if(i/z%10==7)
				{
					sum++;
					break;
				}
				z*=10;
				if(i/z==0)
					break;
			}
		}
	}
	printf("%d",sum);
}