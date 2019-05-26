#include <cstdio>
#include <algorithm>
using namespace std;
const int N=2e5+5;
int a[N],b[N],c[N];
int arr[N*3],cnt=0,num[N*3],sum[N*3];
int mm;
int n,m;
void discrete()//离散化,num数组中每一个下标对应一种语言的数字
{
	sort(arr+1,arr+cnt+1);
	for(int i=1;i<=cnt;i++)
		if(i==1||arr[i]!=arr[i-1])
			num[++mm]=arr[i];
}
int query(int x)
{
	return lower_bound(num+1,num+mm+1,x)-num;
}
int main(void)
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		arr[++cnt]=a[i];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
		arr[++cnt]=b[i];
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&c[i]);
		arr[++cnt]=c[i];
	}
	discrete();
	for(int i=1;i<=n;i++)
	{
		int id=query(a[i]);
		++sum[id];
	}
	int bmax=-1,cmax=-1,ans=0;
	for(int i=1;i<=m;i++)
	{
		int x=query(b[i]);
		int y=query(c[i]);
		if(sum[x]>bmax)
		{
			bmax=sum[x],cmax=sum[y];ans=i;
		}
		else if(sum[x]==bmax&&sum[y]>cmax)
		{
			bmax=sum[x];cmax=sum[y];ans=i;
		}
	}
	printf("%d\n",ans);
	return 0;
}