#include <cstdio>
#include <algorithm>
using namespace std;
#define ll long long int
ll mul(ll a,ll b,ll c)
{
	ll ans=0;
	for(;b;b>>=1)
	{
		if(b&1) ans=(ans+a)%c;
		a=a*2%c;
	}
	return ans;
}
int main(void)
{
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld",mul(a,b,c));
	return 0;
}