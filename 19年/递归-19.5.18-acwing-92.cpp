#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
vector<int> chosen;
int n;
void fang(int x)
{
	if(x==n+1)
	{
		for(int i=0;i<chosen.size();i++)
			printf("%d ",chosen[i]);
		printf("\n");
		return;
	}
	fang(x+1);
	chosen.push_back(x);
	fang(x+1);
	chosen.pop_back();
}
int main(void)
{
	scanf("%d",&n);
	fang(1);
	return 0;
}
