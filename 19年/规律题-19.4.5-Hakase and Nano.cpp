#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
/*
状态转移方程：
状态：1或者1以上(状态2)
A:可以操作两次
B:可以操作一次
3A: 1 1 5   1 5 5   5 5 5   1 1 1
赢 赢 赢 输
4A: 1 1 1 1    1 1 1 5   1 1 5 5    1 5 5 5   5 5 5 5
全赢
5A:1 1 1 1 1  1 1 1 1 5  1 1 1 5 5   1 1 5 5 5  1 5 5 5 5  55555
赢 赢 赢 赢 赢 赢 
6A:111111 111115 111155 111555 115555  155555 555555
输 赢 赢 赢 赢 赢 
B:111155 ->A11115赢->A111115->B111111->A11111赢
3b: 1 1 5  1 5 5   5 5 5   1 1 1
输 赢 
A:3倍全1必输
B:怎么转移到A
3倍+1而且3倍的都是1->B拿走不是1的就可以
3倍且-1都是1->B让那一堆变成1
3B: 1 1 5  1 5 5  5 5 5  1 1 1
输 赢 赢 赢
*/
int main(void)
{
	int i,j,k,t,n,d,vc[25],z,b,flag,sum;
	scanf("%d",&t);
	memset(vc,0,sizeof(vc));
	for(i=0;i<t;i++)
	{
		flag=0;
		sum=0;
		scanf("%d%d",&n,&z);//n个袋子,z状态
		if(z==1)//A先手
		{
				for(j=0;j<n;j++)
				{
					scanf("%d",&b);//
					if(b!=1)
						flag=1;
				}
				if(flag==0&&n%3==0)//如果全为1，则输
					vc[i]=1;
				else//否则赢
					continue;
		}
		else//A后手,3倍或3倍+1有输的可能
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b);
				if(b!=1)
					sum++;
			}
			if(n==1)
				vc[i]=1;
			else if(n==2)
				continue;
			else if(n%3==2)
				continue;
			else if(n%3==0&&sum==1)//余0并且只有一个非0
				vc[i]=1;
			else if(n%3==1&&sum<=1)
				vc[i]=1;
		}

	}
		for(i=0;i<t;i++)
	{
		if(vc[i]==1)
			printf("No\n");
		else
			printf("Yes\n");
	}
}