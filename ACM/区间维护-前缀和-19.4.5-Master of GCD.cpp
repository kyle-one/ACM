/*
n=5,m=3
1 1 1 1 1
l=1,r=3,x=2,
2 2 2 1 1
l=3,r=5,x=2
2 2 4 2 2
l=1,r=5,x=3
6 6 12 6 6
1 2 3  >2
3 4 5>2
1 2 3 4 5>3
每一个数存储2和3的个数
找到数组中最小的2和最小的3*/
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
long long int mod1=998244353,sum[25];
int main(void)
{
	int i,j,k,t,daan1,n,m,x,y,z,mina,minb;
	int a[100100],b[100100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		a[0]=0;b[0]=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%d%d",&n,&m);
		//  0 1 0 4 0 00 3 0 4 1 0 3 0 
		//0 1 0 0   x -1 0  0 0 0
		while(m--)
		{
			scanf("%d%d%d",&x,&y,&z);
			if(z==2)
			{
				a[x]++;a[y+1]--;
			}
			else
			{
				b[x]++;b[y+1]--;
			}
		}
		mina=a[1];minb=b[1];
		for(j=1;j<=n;j++)
		{
			a[j]+=a[j-1];
			if(a[j]<mina)
				mina=a[j];
			b[j]+=b[j-1];
			if(b[j]<minb)
				minb=b[j];
		}
		sum[i]=1;
		while(mina--)
			sum[i]=sum[i]*2%mod1;
		while(minb--)
			sum[i]=sum[i]*3%mod1;

		//printf("%d %d\n",mina,minb);
	}
	for(i=0;i<t;i++)
		printf("%lld\n",sum[i]);
	return 0;
}
