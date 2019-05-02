#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
ll operate(ll a)
{
	ll vc[2]={0,0};
	ll c=1,k=0;
	while(a){
		vc[k]+=min(c,a);
		a-=min(c,a);
		k^=1;
		c<<=1;}
	ll sum=((vc[0]%mod)*(vc[0]%mod))%mod;
	sum+=((vc[1]%mod)*((vc[1]+1)%mod))%mod;
	return sum%mod;
}
int main(void)
{
	ll l,r;
	scanf("%lld%lld",&l,&r);
	printf("%lld",(operate(r)-operate(l-1)+mod)%mod);
	return 0;
}

	