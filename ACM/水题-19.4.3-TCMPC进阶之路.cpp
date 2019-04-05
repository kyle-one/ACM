#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	long long int i,vc[10010]={0};
	int va[10010],t;
	for(i=1;i<=10005;i++)
		vc[i]=vc[i-1]+i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&va[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",vc[va[i]]);
	}
}
	

