#include <stdio.h>
int fan2(int a)//返回hou两个数
{
	int b,c;
	b=a%100;
	return b;
}
int fan1(int a)//返回前两个数
{
	int b;
	b=a/100;
	return b;
}
int panduan(int a,int b)
{
	int c,vb[10],flag1=0,flag2=0,i;
	for(i=0;i<10;i++)
		vb[i]=(i+1)*(i+1);
	for(i=0;i<10;i++)
	{
		if(a==vb[i])
			flag1=1;
		if(b==vb[i])
			flag2=1;
	}
	if(flag1==1&&flag2==1)
		return 1;
	else
		return 0;
}



int main(void)
{
	int i,j,k,sum=0,a,b,vc[3000]={2,3},vb[10],flag=0,prt=2;//169 1229
	for(j=5;j<=9999;j+=2)
	{
		flag=0;
		for(i=1;vc[i]*vc[i]<=j;i++)
			if(j%vc[i]==0)
			{
				flag=1;
				break;
			}
			if(!flag)
				vc[prt++]=j;
	}

	scanf("%d%d",&a,&b);
	for(i=169;i<1229;i++)
	{
		if(vc[i]>b)
			break;
		if(vc[i]>=a&&vc[i]<=b)
		{
			if(panduan(fan1(vc[i]),fan2(vc[i]))==1)
			{
				printf("%d\n",vc[i]);
				sum++;
			}
		}
	}
	printf("%d",sum);


}
