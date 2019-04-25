#include <stdio.h>

int length(long int a)//aµÄÎ»Êý
{
	int d=0;
	while(1){
		d++;
		if(a/10==0)
			break;
		a=a/10;
	}
	return(d);
}

long int jc(long int a)//½×³Ë
{
	int b=a;
	int sum=1;
	for(;b>0;b--)
	{
		sum*=b;
	}
	return(sum);
}

int main(void)
{
	long int a,i,sum;
	for(a=1;a<10000000;a++)
	{
		long int b=length(a);
		int c=a;
		sum=0;
		for(i=0;i<b;i++)
		{
			sum+=jc(c%10);
				c=c/10;
		}
		if(a==sum)
			printf("%d ",a);
	}
}

		