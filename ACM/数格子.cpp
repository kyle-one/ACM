#include <stdio.h>
int main(void)
{
	int i,j,k,sum=0,a,b,min,max;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		max=a;
		min=b;
	}// 1 5
	else
	{
		max=b;
		min=a;
	}
	for(i=min;i>0;i--)//4  0  3  1
	{
		sum+=i*(max+i-min);
		//printf("%d ",i*(max+i-min));
	}
	printf("%d",sum);
}




