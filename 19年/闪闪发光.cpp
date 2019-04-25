#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
set<int> vc;
set<int>::iterator it;
int main(void)
{
	int n,i,j,k,a;
	
	while(scanf("%d",&n)!=EOF&&n)
	{
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
		while(1)
		{
			it=vc.find(a);
			if(it!=vc.end())
			{
				vc.erase(a);
				a++;
			}
			else
				break;
		}
		vc.insert(a);

		}
		printf("%d\n",vc.size());
	}
		
}
