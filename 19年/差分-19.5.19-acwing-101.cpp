#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
map<pair<int,int>,bool> existed;
int d[10010];
int main(void)
{
	int n,p,h,m;
	scanf("%d%d%d%d",&n,&p,&h,&m);
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b) swap(a,b);
		if(existed[make_pair(a,b)]) continue;
		d[a+1]--;d[b]++;
		existed[make_pair(a,b)]=true;
	}
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		flag+=d[i];
		printf("%d\n",flag+h);
	}
}