#include <cstdio>
#include <algorithm>
#define ll long long int
using namespace std;
//数字中有0，则要转换为没有0的最大数
//找到第一个0，把0前面的数字-1，0以及后面的数字变成9
//方法：第一位降，后续全变9
int main(void)
{
	ll n,sum=1,flag=-1,max1=1;
	ll vc[15];//存放每一个数字
	scanf("%lld",&n);
	if(n<10&&n>=1)
		printf("%lld",n);
	else{
		ll a=n;int zhi=0;
		while(a){
			vc[zhi++]=a%10;
			a/=10;}
		for(int i=0;i<zhi;i++)
			max1*=vc[i];
		for(int i=0;i<zhi-1;i++){
			ll sum2=1;
			if(vc[i]!=9)
			{
				vc[i]=9;
				if(vc[i+1]!=0)
					vc[i+1]-=1;
				else{
					int j=i+1;vc[i+1]-=1;
					while(vc[j]==-1){
						vc[j++]=9;
						vc[j]-=1;}}}
			if(vc[zhi-1]==0) vc[zhi-1]=1;
			for(int j=0;j<zhi;j++)
				sum2*=vc[j];
			//for(int j=0;j<zhi;j++)
				//printf("%lld ",vc[j]);
			if(max1<sum2) max1=sum2;}
		printf("%lld",max1);}
	
}
