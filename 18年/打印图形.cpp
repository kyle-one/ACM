#include <stdio.h>//A 65  Z 90
int main(void)
{
	int i,j,k,a;
	char zi;
	scanf("%c",&zi);
	a=zi-64;//a表示字母对应的数字，如A1，B2,同时a对应控制行数
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=i;j<a;j++)
			printf("%c",zi-j);
		for(j=0;j<a;j++)
			printf("%c",65+j);
		printf("\n");
	}
}

