#include <cstdio>
#include <algorithm>
using namespace std;
//每个；a，b，位置j
//ai⋅(j−1)+bi⋅(n−j) .
//=(a-b)j+(b-a)n;
#define ll long long int
struct abc{
	ll a;
	ll b;
	ll cha;
	abc(ll a=0,ll b=0,ll cha=0):a(b),b(b),cha(cha){}
}vc[100050];
bool complare(abc a,abc b){
	return a.cha>b.cha;}
int main(void)
{
	int n;
	ll sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&vc[i].a,&vc[i].b);
		vc[i].cha=vc[i].a-vc[i].b;}
	sort(vc+1,vc+n+1,complare);
	for(int i=1;i<=n;i++){
		sum+=vc[i].cha*i-vc[i].a+vc[i].b*n;}
	printf("%lld",sum);
}




