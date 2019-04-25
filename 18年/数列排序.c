/*
题目描述
将一正整数序列{K1,K2,...,K9}重新排列成一个新的序列。新序列中，比K1小的数都在K1的前面(左面)，比K1大的数都在K1的后面(右面)。 
输入
输入有多行,第一行为N表示行数,每行9个整数. 
输出
输出N行,按要求进行排序的结果. 
样例输入
2
6 8 9 1 2 5 4 7 3
3 5 8 9 1 2 6 4 7

样例输出
3 4 5 2 1 6 8 9 7
2 1 3 5 8 9 6 4 7

*/
#include <stdio.h>
int main(void)
{
	int n,vc[10],vb[10],j,k,i,p,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<9;j++)
			scanf("%d",&vc[j]);
		p=vc[0];
		a=0;
		for(j=8;j>=0;j--)
			if(vc[j]<p)
			{
				vb[a]=vc[j];
				a++;
			}
		for(j=0;j<9;j++)
			if(vc[j]==p)
			{
				vb[a]=vc[j];
				a++;
			}
		for(j=0;j<9;j++)
			if(vc[j]>p)
			{
				vb[a]=vc[j];
				a++;
			}
		for(j=0;j<9;j++)
			printf("%d ",vb[j]);
		printf("\n");
	}
}



