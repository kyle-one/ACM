/*
题目描述
问题描述： 
给定含有n个元素的多重集合S，每个元素在S中出现的次数称为该元素的重数。多重集S中重数最大的元素称为众数。 
例如，S={1，2，2，2，3，5}。多重集S的众数是2，其重数为3。 
编程任务： 
对于给定的由n 个自然数组成的多重集S，编程计算S 的众数及其重数。 
输入
第1行多重集S中元素个数n(n<=50000)；接下来的n 行中，每行有一个自然数。
输出
输出文件有2 行，第1 行给出众数，第2 行是重数。(如果有多个众数，只输出最小的)
*/
#include <stdio.h>
int main(void)
{
	int n,vc[50001],i,j,k,tmp,vb[50001],va[50001],max,u,a;
	for(i=0;i<50001;i++)
		vb[i]=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&vc[i]);
	for(i=n-1;i>0;i--)
		for(k=0;k<i;k++)
			if(vc[k]>vc[k+1])
			{
				tmp=vc[k];
				vc[k]=vc[k+1];
				vc[k+1]=tmp;
			}
	j=0;
	for(i=0;i<n-1;i++)
	{
		if(vc[i]==vc[i+1])
			vb[j]++;
		else
			j++;
	}
	a=0;
	va[0]=0;
	for(i=0;i<n-1;i++)
		if(vc[i]!=vc[i+1])
		{
			va[a]=vc[i];
			a++;
			break;
		}
	for(i=0;i<n-1;i++)
		if(vc[i]!=vc[i+1])
		{
			va[a]=vc[i+1];
			a++;
		}
	max=vb[0];u=0;
	for(i=1;i<j+2;i++)
		if(vb[i]>max)
		{
			max=vb[i];
			u=i;
		}
	printf("%d\n%d",va[u],max);

}

