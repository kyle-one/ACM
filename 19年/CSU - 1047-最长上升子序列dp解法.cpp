#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN=1010;
int a[MAXN];int maxLen[MAXN];

int main(void)
{
	int N,i,j,k;
	while(scanf("%d",&N)!=EOF)
	{
	for(i=1;i<=N;i++)
	{
		cin>>a[i];maxLen[i]=1;
	}
	for(i=2;i<=N;i++)
		for(j=1;j<i;j++)
		{
			if(a[i]>a[j])
				maxLen[i]=max(maxLen[i],maxLen[j]+1);

		}
		printf("%d\n",*max_element(maxLen+1,maxLen+N+1));
	}
	return 0;
}
