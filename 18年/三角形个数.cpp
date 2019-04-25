#include <stdio.h>
int main(void)
{
	int a,b,i,j,k,sum=0;
	scanf("%d%d",&a,&b);
	i=a+b;
	if(a>b)
		j=a-b;
	else
		j=b-a;
	a=i;//aÎªºÍ
	b=j;//bÎª²î
	for(i=1;;i++)
	{
		if(i<a&&i>b)
			sum++;
		if(i>a+b)
			break;
	}
	printf("%d",sum);
}
