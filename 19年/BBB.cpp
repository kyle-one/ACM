#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
long long int n,i,j,k;
long long int x,y,s,v,sum=0;
int main(void)
{
	long long int a10=10*10,a30=30*30,a50=50*50,a70=70*70;
	long long int a90=90*90,a110=110*100,a130=130*130;
	long long int a150=150*150,a170=170*170,a190=190*190;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&x,&y);
		s=x*x+y*y;
		if(s<=a10)
			v=10;
		else if(s<=a30&&s>a10)
			v=9;
		else if(s<=a50&&s>a30)
			v=8;
		else if(s<=a70&&s>a50)
			v=7;
		else if(s<=a90&&s>a70)
			v=6;
		else if(s<=a110&&s>a90)
			v=5;
		else if(s<=a130&&s>a110)
			v=4;
		else if(s<=a150&&s>a130)
			v=3;
		else if(s<=a170&&s>a150)
			v=2;
		else if(s<=a190&&s>a170)
			v=1;
		else 
			v=0;
		sum+=v;
	}
		printf("%lld",sum);
}