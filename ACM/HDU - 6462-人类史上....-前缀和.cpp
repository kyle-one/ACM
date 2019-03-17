#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;
const int MAX=50000;
const int MM=192600817;
long long int ans[MAX],ans2[MAX],sum[MAX]={0};


void f()
{
	long long int i;
	sum[0]=0;
	ans[1]=1;ans[2]=1;
	for(i=3;i<=MAX-1;i++)
		ans[i]=(ans[i-1] % MM + ans[i-2] % MM ) % MM;
	for(i=1;i<=MAX-1;i++)
		ans2[i] = ( ( ans[i]%MM) * (ans[i]%MM) )% MM;
	for(i=1;i<MAX-1;i++)
		sum[i]=(ans2[i]%MM+sum[i-1]%MM)%MM;
}
int main(void)
{
	long long int i,j,k,n,a,b,c,d;
	while(cin>>n)
	{
	f();
	while(n--)
	{
		cin>>a>>b>>c>>d;
		b+=a*4;
		d+=c*4;
		if(b>d)
		{
			k=b;
			b=d;
			d=k;
		}
		k=(sum[d+1]%MM-sum[b]%MM)%MM;
		if(k<0)
			k+=MM;
		cout<<k<<endl;
	}
	}
}



