#include <cstdio>
using namespace std;
int main(void)
{
	int i,j,k,n,t,cout;
	while(scanf("%d",&n)!=EOF)
	{
		n=n*2+1;
		cout=1;
		t=2;
		while(t!=1)
		{
			t=(t*2)%n;
			cout++;
		}
		printf("%d\n",cout);
	}
}
