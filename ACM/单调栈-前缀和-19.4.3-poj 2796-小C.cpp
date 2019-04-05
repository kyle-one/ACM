#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=1e6+100;
int i,j,k,n;
long long int sum[maxn]={0},a[maxn],maxa=-1,t;//前缀和
int l[maxn],r[maxn],max1=0,max2=0;//左区间，右区间，读数

int main(void)
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	for(i=1;i<=n;i++)//求i的左区间
	{
		j=i;
		while(j>1&&a[j-1]>=a[i])//10 5 4 9 4 5 9
			j=l[j-1];
		l[i]=j;
		//i=1,j=1,l[1]=1;
		//i=2,j=2,j=l[1]=1;i[2]=1;
		//i=3,j=3,j=l[2]=1;
		//i=4,j=4,j=
	}
	for(i=n;i>0;i--)
	{//6 10 1 9 4 5 9//i=6,r[i]=1;i=5,
		j=i;
		while(j<n&&a[j+1]>=a[i])
			j=r[j+1];
		r[i]=j;
	}
	for(i=1;i<=n;i++)
	{
		t=a[i]*(sum[r[i]]-sum[l[i]-1]);
		if(t>maxa)
		{
			maxa=t;
			max1=l[i];
			max2=r[i];
		}
	}//3 6
	printf("%lld\n%d %d\n",maxa,max1,max2);
	//printf("%lld %lld %lld\n",a[4],r[4],l[4]);
	//printf("%lld",sum[r[4]]);//11 38
	return 0;
}





