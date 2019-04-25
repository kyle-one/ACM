#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	int t,n,va[200010],i,j,k,a,p,flag[11];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{

		scanf("%d",&n);
		for(j=0;j<2*n;j++)
			scanf("%d",&va[j]);
		for(j=0;j<2*n;j++)
		{
			scanf("%d",&p);
			va[j]+=p;
		}
		sort(va,va+2*n);//n=3;012345
		if(va[n]>va[n-1])
			flag[i]=1;
		else
			flag[i]=0;
	}
	for(i=0;i<t;i++)
	{
		if(flag[i]==1)
			printf("Cheat\n");
		else
			printf("Fail\n");
	}
}
		


	