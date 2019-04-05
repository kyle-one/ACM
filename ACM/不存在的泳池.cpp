#include <cstdio>
#include <algorithm>
using namespace std;

int gong(int a,int b)
{
	if(a==0)
		return b;
	if(a==b)
		return 1;
	return gong(b%a,a);//最大公约数算法！
}
int main(void)
{
	int a1,a2,a,b,gong1,sum=0;
	while(scanf("%d%d",&a1,&a2)!=EOF)
	{
		sum=0;
		gong1=gong(a1,a2);
		a=a1/gong1;
		b=a2/gong1;
		if(a==b)
			printf("0\n");
		else
		{
		while(a%2==0)
		{
			a/=2;
			sum++;
		}
		while(a%3==0)
		{
			a/=3;
			sum++;
		}
		while(b%2==0)
		{
			b/=2;
			sum++;
		}
		while(b%3==0)
		{
			b/=3;
			sum++;
		}
		
		if(a==b)
			printf("%d\n",sum);
		else
			printf("-1\n");
		}
	}
	return 0;
}
