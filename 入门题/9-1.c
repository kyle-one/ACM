#include <stdio.h>
int main(void)
{
	char name[40];
	printf("请输入你的名字:");
	scanf("%s",name);
	printf("%s先生你好！",name);
	return(0);
}