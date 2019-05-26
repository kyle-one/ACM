#include <cstdio>
#include <cstring>
#include <algorithm>
#define ll long long int
using namespace std;
const int N=500005;
int n,z,vc[N],va[N];//va为离散化后的数组,vc为树状数组
int lowbit(int x){return x&-x;}

struct Node
{
	int v,order;//用于离散化
}a[N];//a为一开始读入数据的数组
bool cmp(Node a,Node b)
{
	return a.v<b.v;
}
void update(int x,int y,int n)//树状数组更新
{
	for(int i=x;i<=n;i+=lowbit(i))
		vc[i]+=y;
}
int getsum(int x)//树状数组求和
{
	int ans=0;
	for(int i=x;i>0;i-=lowbit(i))
		ans+=vc[i];
	return ans;
}
int main(void)
{
	
	while(scanf("%d",&n)&&n)
	{
		memset(vc,0,sizeof(vc));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i].v);//读入a[i]的数据和位置，为后面的离散化做准备
			a[i].order=i;
		}
		sort(a+1,a+1+n,cmp);//对a数组按照a.v从小到大排序
		for(int i=1;i<=n;i++)
			va[a[i].order]=i;//离散化
		ll ans=0;
		for(int i=1;i<=n;i++)
		{
			update(va[i],1,n);
			ans+=i-getsum(va[i]);//树状数组求和的方法
		}
		printf("%lld\n",ans);
	}
	return 0;
}

