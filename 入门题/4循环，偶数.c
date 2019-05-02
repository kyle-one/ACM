#include <stdio.h>
int main(void)
{
	int a,b;
	a=0;b=2;
	do{
		a+=1;
		b*=2;
		printf("%d",b);
	}while(a<=5);
	return(0)
}
