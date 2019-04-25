#include <stdio.h>
int main(void)
{
	int a,b;
	sancf("%d%d",&a,&b);
	printf("%d",(a>b)?a-b:b-a);
	return(0);
}