#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

	double vc[5];

bool xiangdeng(double b)//判断浮点数是否相等
{
	return fabs(b)<=1e-6;
}

bool f(double vc[],int n)
{
	int i,j,k,m;
	if(n==1)
	{
		if(xiangdeng(vc[0]-24))
			return true;
		else 
			return false;
	}
	//计算所有的两个数的运算结果
	double b[5];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			m=0;
			for(k=0;k<n;k++)
				if(k!=i&&k!=j)
					b[m++]=vc[k];
			b[m]=vc[i]+vc[j];
			if(f(b,m+1))
				return true;
			b[m]=vc[i]-vc[i];
			if(f(b,m+1))
				return true;
			b[m]=vc[j]-vc[i];
			if(f(b,m+1))
				return true;
			b[m]=vc[i]*vc[i];
			if(f(b,m+1))
				return true;
			if(!xiangdeng(vc[j]))
			{
				b[m]=vc[i]/vc[j];
				if(f(b,m+1))
					return true;
			}
			if(!xiangdeng(vc[i]))
			{
				b[m]=vc[j]/vc[i];
				if(f(b,m+1))
					return true;
			}
		}
		return false;
}




int main(void)
{


	while(scanf("%lf%lf%lf%lf",&vc[0],&vc[1],&vc[2],&vc[3]))
	{
		if(vc[0]==0&&vc[1]==0&&vc[2]==0&&vc[3]==0)
			break;
		else
		{
			if(f(vc,4))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	//vc[0]=5;vc[1]=5;vc[2]=5;vc[3]=1;
	//printf("%d",f(vc,4));
}
