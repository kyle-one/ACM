#include <stdio.h>  //编译预处理命令

int main(void)  //确定数值类型
{
	int sb;//增加变量

	printf("shuru");//输出
	scanf("%d",&sb);//输入，其中%d代表十进制数字,注意用该函数要加&符号

	printf("jieguodengyu%d\n",10+sb);//计算和输出，\n是换行符
	
	return(0);//返回到0
}