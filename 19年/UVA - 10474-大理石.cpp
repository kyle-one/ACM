#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	int i,j,k,vc[100],n,q,flag=1,x,p;
	while(scanf("%d%d",&n,&q)==2&&n)
	{
		printf("CASE# %d:\n",flag++);
		for(i=0;i<n;i++)
			scanf("%d",&vc[i]);
		sort(vc,vc+n);
		while(q--)
		{
			scanf("%d",&x);
			p=lower_bound(vc,vc+n,x)-vc;
			if(vc[p]==x)
				printf("%d found at %d\n",x,p+1);
			else
				printf("%d not found\n",x);
		}
	}
	return 0;
}