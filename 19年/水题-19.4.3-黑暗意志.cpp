#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	long long int vc[1000010],aaa1[1000010],aaa2[1000010],tt;
	int i,j,k,n,t,flag;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&vc[i]);
		sort(vc,vc+n);//1 1 2 2 9 3 3 4 4  5 5 8 -1
		vc[n]=-1;
		flag=0;
		for(i=0;i<n;i+=2)
		{
			if(vc[i]!=vc[i+1])
			{
				aaa1[k]=vc[i];
				flag=i+1;
				break;
			}
		}
		for(i=flag;i<n;i+=2)
		{
			if(vc[i]!=vc[i+1])
			{
				aaa2[k]=vc[i];
				break;
			}
		}
		//printf("%lld %lld\n",aaa1[k],aaa2[k]);
		if(aaa1[k]<aaa2[k])
		{
			tt=aaa1[k];
			aaa1[k]=aaa2[k];
			aaa2[k]=tt;
		}

	}
	for(i=0;i<t;i++)
		printf("%lld %lld\n",aaa1[i],aaa2[i]);
	
}

