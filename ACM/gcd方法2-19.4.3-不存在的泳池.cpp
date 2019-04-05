#include <cstdio>
#include <algorithm>
using namespace std;

/*int yue(int x,int y)
{
	if(x==0)
		return y;
	if(y==x)
		return 1;
	return yue(y%x,x);
	//最大公约数算法1:递归算法
}*/  
int yue(int x,int y)
{
	int z=y;
	while(x%y!=0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return z;//算法2：循环算法
}

int main(void)
{
	int x,y,a,b,gong1,sum=0;
	while(scanf("%d%d",&x,&y)!=EOF)
	{

		sum=0;
		gong1=yue(x,y);
		a=x/gong1;
		b=y/gong1;
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
		
		if(a!=b)
			printf("-1\n");
		else
			printf("%d\n",sum);
			
		}
	}
	return 0;
}
