#include <stdio.h>
int main(void)
{
	int a,b;
	puts("输入两个数字");
	scanf("%d%d",&a,&b);
	if (a%b)
		printf("%d不是%d的约数",b,a);
	else
		printf("%d是%d的约数",b,a);
	return(0);
}
