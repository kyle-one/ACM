/*题目描述

将C程序代码中的双斜杠注释去掉。

输入
输入数据中含有一些符合C++语法的代码行。需要说明的是，为了方便编程，规定双斜杠注释内容不含有双引号,源程序中没空行。
输出
输出不含有双斜杠注释的C++代码，除了注释代码之外，原语句行格式不变。 
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char vc[1000];
	int i,a,b;
	while(gets(vc))
	{
		b=0;
		a=strlen(vc);
		for(i=0;i<a;i++)
		{
			if(vc[0]=='/'&&vc[1]=='/')
			{
				b=1;
				break;
			}
			
			if(vc[i]=='/'&&vc[i+1]=='/')
			{
				break;
			}
			printf("%c",vc[i]);
		}
		if(b==0)
			printf("\n");
	}
}
