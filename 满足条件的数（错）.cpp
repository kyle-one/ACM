#include <stdio.h>
int len(int a)
{
	int i=0;
	while(a/10!=0)
	{
		i++;
		a/=10;
	}
	return i+1;
}
//计算数字的长度
int abc(int a)
{
	int i,sum=0;
	int b=a;
	if(len(a)==2)
		sum=b/10+b%10;
	if(len(a)==3)
		sum=b%10+b/10%10+b/100;
	if(len(a)==4)
		sum=b%10+b/10%10+b/100%10+b/1000;
	if(len(a)==5)
		sum=b%10+b/10%10+b/100%10+b/1000%10+b/10000;
	return(sum);
}
//计算数字之和
int main(void)
{
	unsigned int vc[1820],i,j=1,k,sum,n;
	for(i=68;i<32768;i++)
	{
		if(abc(i)==15)
		{
			vc[j]=i;
			j++;
		}
	}
	scanf("%d",&n);
	if(n<69)
		return 0;
	else
	{
	for(i=0;i<1820;i++)
		if(n<vc[i+1]&&n>=vc[i])
			j=i+1;
	for(i=1;i<j;i++)
	{
		printf("%6d",vc[i]);
		if(i%8==0&&i!=j-1)
			printf("\n");
	}
	}
}


