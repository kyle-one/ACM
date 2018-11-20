/*
题目描述
输入一串字符,将其中的大写变成小写，若不为大写则原样输出
输入
任意字符串(长度在100以内)以回车表示输入结束
输出
将其中的大写 输出相应的小写，若不为大写则原样输出
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int i,a;
	char vc[101];
	gets(vc);
	a=strlen(vc);
	for(i=0;i<a;i++)
	{
		if(vc[i]<='Z'&&vc[i]>='A')
			printf("%c",tolower(vc[i]));
		else
			printf("%c",vc[i]);
	}
}