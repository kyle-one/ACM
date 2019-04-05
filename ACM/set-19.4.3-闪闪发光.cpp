#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
set<int> vc;
int i,j,k,n,a;

int main(void)
{
	
	while(scanf("%d",&n)!=EOF)
	{
		vc.clear();

		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			while(vc.find(a)!=vc.end())
			{
				vc.erase(a);
				a++;
			}
			vc.insert(a);
		}
		printf("%d\n",vc.size());
	}

}