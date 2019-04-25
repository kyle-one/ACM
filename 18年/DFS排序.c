/*题目描述
Ray又对数字的列产生了兴趣: 现有四张卡片，用这四张卡片能排列出很多不同的4位数，要求按从小到大的顺序输出这些4位数。 
输入
第一行是一个整数N，表示数据的组数。每组数据占一行，代表四张卡片上的数字（保证四个数字都不同，且0<数字<10）。 
输出
对每组卡片按从小到大的顺序输出所有能由这四张卡片组成的4位数，千位数字相同的在同一行，同一行中每个四位数间用空格分隔，每组输出数据间空一行，最后一组数据后面没有空行
*/
#include <stdio.h>
int main(void)
{
	int n=0,vc[4],i,j,k,b,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(b=0;b<4;b++)
			scanf("%d",&vc[b]);
		for(b=3;b>0;b--)
			for(j=0;j<b;j++)
			if(vc[j]>vc[j+1])
			{
				k=vc[j];
				vc[j]=vc[j+1];
				vc[j+1]=k;
			}
		printf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",\
		vc[0],vc[1],vc[2],vc[3],vc[0],vc[1],vc[3],vc[2],vc[0],vc[2],vc[1],vc[3],\
		vc[0],vc[2],vc[3],vc[1],vc[0],vc[3],vc[1],vc[2],vc[0],vc[3],vc[2],vc[1],\
		vc[1],vc[0],vc[2],vc[3],vc[1],vc[0],vc[3],vc[2],vc[1],vc[2],vc[0],vc[3],\
		vc[1],vc[2],vc[3],vc[0],vc[1],vc[3],vc[0],vc[2],vc[1],vc[3],vc[2],vc[0],\
		vc[2],vc[0],vc[1],vc[3],vc[2],vc[0],vc[3],vc[1],vc[2],vc[1],vc[0],vc[3],\
		vc[2],vc[1],vc[3],vc[0],vc[2],vc[3],vc[0],vc[1],vc[2],vc[3],vc[1],vc[0],\
		vc[3],vc[0],vc[1],vc[2],vc[3],vc[0],vc[2],vc[1],vc[3],vc[1],vc[0],vc[2],\
		vc[3],vc[1],vc[2],vc[0],vc[3],vc[2],vc[0],vc[1],vc[3],vc[2],vc[1],vc[0]);
		if(i<n-1)
			printf("\n\n");
	}
}