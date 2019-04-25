/*
题目描述
读入一些字符串，将其中的空格去掉。
输入
输入为多行，每行为一个字符串，字符串只由字母、数字和空格组成，长度不超过80。输入以“End of file”结束。
输出
对于每行输入，输出转换后的字符串。
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char vc[100][100];
	int vb[100];
	int i=0,k,j,p=0;
	for(k=0;k<100;k++)
		vb[k]=0;
	for(k=0;k<100;k++)
		for(j=0;j<100;j++)
			vc[k][j]='\0';
	while(gets(vc[i]))
	{
		if(strncmp(vc[i],"End of file",11)==0)
			break;
		i++;
	}
	for(k=0;k<i;k++)
		for(j=0;j<100;j++)
			if(vc[k][j]!='\0')
			{
				vb[k]++;
			}
	for(k=0;k<i;k++)
	{
		for(j=0;j<vb[k];j++)
			if(vc[k][j]!=' ')
			{
				printf("%c",vc[k][j]);
				p=1;
			}
		if(p==1)
			printf("\n");
		p=0;
	}
}

