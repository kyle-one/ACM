/*
题目描述
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。 
输入
有2行，第1行为1个正整数，表示所生成的随机数的个数： 
N 
第2行有N个用空格隔开的正整数，为所产生的随机数。 
输出
也是2行，第1行为1个正整数M，表示不相同的随机数的个数。第2行为M个用空格隔开的正整数，为从小到大排好序的不相同的随机数。 
*/

#include <stdio.h>
int sort(int *vc,int n)
{
	int i,j,flag,tmp;
	for(i=n;i>0;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(vc[j]>vc[j+1])
			{
				tmp=vc[j];
				vc[j]=vc[j+1];
				vc[j+1]=tmp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}
int main(void)
{
	int n,i,j,k,m;
	int vc[101],vb[101];
	scanf("%d",&n);
	m=n;
	for(i=0;i<n;i++)
		scanf("%d",&vc[i]);
	sort(vc,n-1);
	k=0;
	for(i=0;i<n-1;i++)
	{
		if(vc[i]!=vc[i+1])
		{
			vb[k]=vc[i];
			k++;
		}
	}
	if(vc[i]!=vc[i+1])
	{
		vb[k]=vc[i];
		k++;
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
		printf("%d ",vb[i]);

}
