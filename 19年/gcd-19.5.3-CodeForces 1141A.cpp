#include <cstdio>
#include <algorithm>
using namespace std;
#define ll long long int
ll yue(ll x,ll y)//a>b
{
	ll z=y;
	while(x%y!=0){
		z=x%y;
		x=y;
		y=z;
	}
	return z;
}
ll pan(ll a,ll b)
{
	ll sum=0;
	while(a%2==0){
		a/=2;sum++;}
	while(a%3==0){
		a/=3;sum++;}
	if(a==b)
	return sum;
	else
		return -1;
}
int main(void)
{
	long long int a,b,t;
	scanf("%lld%lld",&a,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;}
	ll abc=yue(a,b);//对 432*120
	//printf("%lld  \n",abc);//公约数
	a/=abc;b/=abc;
		printf("%lld",pan(b,a));
}