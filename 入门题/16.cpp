#include <stdio.h>

int main(void)
{
	double a,b;
	puts("输入两个浮点数");
	scanf("%lf%lf",&a,&b);
	printf("a+b=%f\na-b=%f\n",a+b,a-b);
	return(0);
}