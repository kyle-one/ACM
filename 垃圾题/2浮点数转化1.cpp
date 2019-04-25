#include <stdio.h>
int main(void)
{
	int a,b;
	puts("输入两个数字");
	scanf("%d%d",&a,&b);
	printf("%f%%",(a*100.0)/b);
	return(0);
}