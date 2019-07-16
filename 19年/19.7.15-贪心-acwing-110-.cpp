#include <cstdio>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
pair<int,int> cows[2510];
map<int,int> spfs;
int res=0;
int main(void)
{
	int C,L;
	scanf("%d%d",&C,&L);
	for(int i=0;i<C;i++)
		scanf("%d%d",&cows[i].first,&cows[i].second);
	for(int i=0;i<L;i++)
	{
		int spf,cover;
		scanf("%d%d",&spf,&cover);
		spfs[spf]+=cover;
	}
	sort(cows,cows+C);
	spfs[0] = spfs[1001] = C;
	for(int i=C-1;i>=0;i--)
	{
		auto spf=spfs.upper_bound(cows[i].second);
		spf--;
		if(spf->first>=cows[i].first)
		{
			res++;
			if(--spf->second==0)
				spfs.erase(spf);
		}
	}
	printf("%d\n",res);
}
