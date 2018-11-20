/*
题目描述
验证尼科彻斯定理，即：任何一个正整数的立方都可以写成一串连续奇数的和。 
输入
任一正整数 n<=100 

输出
该数的立方分解为一串连续奇数的和 
*/

#include <stdio.h>
int main(void)
{
	long int n,vc[500],i,a,b,sum,k;
	scanf("%ld",&n);
	a=n*n*n;
	b=n*n-n+1; 
	sum=vc[0]=b;
	if(n==1)
		printf("1*1*1=1=1");
	else 
	{
	for(i=1;i<500;i++)
	{
		vc[i]=vc[i-1]+2;
		sum+=vc[i];
		if(sum==a)
			break;
	}
	printf("%ld*%ld*%ld=%ld=%ld",n,n,n,a,vc[0]);
	for(k=1;k<=i;k++)
		printf("+%ld",vc[k]);
	}
}

