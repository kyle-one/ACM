#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#define ll long long int
using namespace std;
ll N,M;
ll data[100005];
ll v1[200005],v2[200005];//用两个树状数组来存储数据
ll lowbit(ll x){return x&-x;}
//区间更新，区间求和
void update(ll x,ll y)
{
	for(ll i=x;i<=N;i+=lowbit(i))
	{
		v1[i]+=y;
		v2[i]+=x*y;
	}
}
ll queey(ll x)
{
	ll ans=0;
	for(ll i=x;i;i-=lowbit(i))
		ans+=(x+1)*v1[i]-v2[i];
	return ans;
}
int main(void)
{
	scanf("%lld%lld",&N,&M);
	for(int i=1;i<=N;i++)
	{
		scanf("%lld",&data[i]);
		update(i,data[i]-data[i-1]);
	}
	char ch,bb[10];
	getchar();
	while(M--)
	{
		do ch=getchar();
			while(ch!='C'&&ch!='Q');
		if(ch=='C')
		{
			ll a,b,c;
			scanf("%lld%lld%lld",&a,&b,&c);
			update(a,c);
			update(b+1,-c);
		}
		else
		{
			ll a,b;
			scanf("%lld%lld",&a,&b);
			printf("%lld\n",queey(b)-queey(a-1));
		}
	}
	return 0;
}