#include <stdio.h>
int main(void)
{
	int a,b;
	a=0;b=1;
	do{
		a=a+b;
		b=b+1;
	}while(b<=5);
	printf("%d",a);
}