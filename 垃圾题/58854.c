#include <stdio.h>
int minof(int a,int b)
{
	int min;
	min = a;
	if (b<min)
		min=b;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",minof(a,b));
}