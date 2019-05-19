#include <cstdio>
#include <algorithm>
using namespace std;
#define ll long long int
int power(int a,int b,int p)//方法1
{
	int ans=1%p;
	for(;b;b>>=1)
	{
		if(b&1) ans=(ll) ans*a%p;
		a=(ll) a*a%p;
	}
	return ans;
}
int power2(int a,int b,int c)//方法2
{
	ll ans=1,a1=a,b1=b,c1=c;
	while(b1>0)
	{
		if(b1%2==1)
		{
			ans%=c1;
			a1%=c1;
			ans*=(ll)a1;
		}
		a1%=c1;a1*=(ll)a1;b1>>=1;
	}
	return ans%c;
}
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",power2(a,b,c));
}