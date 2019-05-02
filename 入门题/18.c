#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=a;
	if (b>d) d=b;
	if (c>d) d=c;
	printf("%d",d);
	return(0);
}