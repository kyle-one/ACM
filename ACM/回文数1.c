/*
题目描述
若一个数（首位不为0）从左到右读与从右到左读都是一样，这个数就叫做回文数，例如12521就是一个回文数。 
给定一个正整数，把它的每一个位上的数字倒过来排列组成一个新数，然后与原数相加，如果是回文数则停止，如果不是，则重复这个操作，直到和为回文数为止。给定的数本身不为回文数。 
例如：87则有： 
STEP1: 87+78=165 
STEP2: 165+561=726 
STEP3: 726+627=1353 
STEP4: 1353+3531=4884 
编写一个程序，输入M（12<=M<=100）,输出最少经过几步可以得到回文数。如果在8步以内（含8步）不可能得到回文数，则输出0。 
输入
第1行一个正整数L,代表测试数据的组数。 
接下来L行每行一个整数M（12<=M<=100），M本身不为回文数； 
输出
输出L行，第i行对应输入数据的第i+1行，输出最少需要的步数；如果步数大于8，则输出0。
*/
#include <stdio.h>
int len(int a)
{
	int i=1,b=a;
	while(1)
	{
		if(b>9)
		{
			b=b/10;
			i++;
		}
		else
			break;
	}
	return(i);
}
int leng(int a)
{
	int i,sum=1;
	for(i=1;i<len(a);i++)
		sum*=10;
	return(sum);
}
int hui(int a)
{
	int b=a,i,sum=0,n=len(b),m=leng(b);
	for(i=0;i<n;i++)
	{
		sum+=(b%10)*m;
		m/=10;
		b/=10;
	}
	return(sum);
}
int main(void)
{
	int n,i,a,j,k,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		p=0;
		for(j=1;j<=8;j++)
		{
			a=a+hui(a);
			if(a==hui(a))
			{
				printf("%d\n",j);
				p=1;
				break;
			}
		}
		if(p==0)
			printf("0\n");
	}
}
