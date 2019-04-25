/*
题目描述
恺撒生活在充满危险和阴谋的时代. 恺撒面对的最困难的问题是生存. 为了生存, 他决定创造一种密码. 这种密码听起来难以置信, 如果不知 

道方法, 没有人可以破解. 

你是恺撒军队的一个上尉. 你的工作是解密消息并将之提供给将军. 密码很简单. 对明文的每个字母右移5个位置以创建密文 (如字母'A', 密 

文是'F'). 
有如下对应: 

密文 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

明文 
V W X Y Z A B C D E F G H I J K L M N O P Q R S T U 

只有字母需要移位, 其它字符保持不变, 所有字母均是大写. 
输入
输入为至多100组数据. 每组数据有如下格式, 中间无空行. 

一组数据有3部分: 

起始行 - 单独一行: "START" 
密文 - 单独一行, 包含1到200个字符, 组成恺撒的消息. 
结束行 - 单独一行: "END" 

最后一组输入是单独一行: "ENDOFINPUT". 
输出
对每组数据有一行输出. 即恺撒的原始消息. 
*/


#include <stdio.h>

char abc(char *a)
{
	char b;
	if(*a<='Z'&&*a>='F')
		*a=*a-5;
	else if(*a<='E'&&*a>='A')
		*a=*a+26-5;
}
int main(void)
{
	int i=0,k,j;
	char vc[100][300];
	char vb[100][15];
	char va[100][15];
	while(1)
	{
		scanf("%s",&va[i]);
		getchar();
		if(strncmp(va[i],"ENDOFINPUT",10)==0)
			break;
		gets(vc[i]);
		scanf("%s",&vb[i]);
		getchar();
		i++;
	}
	for(j=0;j<i;j++)
	{
		for(k=0;k<200;k++)
		if(vc[j][k]>='A'&&vc[j][k]<='Z')
			abc(&vc[j][k]);
		printf("%s\n",vc[j]);
	}
}