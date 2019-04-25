#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void)
{
	int i,j,n,m,k,sum=0,flag=0;
	while(scanf("%d%d",&m,&k)!=EOF&&(m!=0||k!=0))
	{
		sum=0;
		flag=0;
		while(m>0)
		{
			sum++;
			flag++;
			m--;
			if(flag>=k)
			{
				flag=0;
				m++;
			}
		}
		printf("%d\n",sum);
	}
}
