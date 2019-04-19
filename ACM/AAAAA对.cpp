#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int p1,s1,p2,s2,n,i,j,k;
int main(void)
{
	scanf("%d%d%d%d",&p1,&s1,&s2,&p2);
	if(p1+p2>s1+s2)
		printf("Persepolis");
	else if(p1+p2<s1+s2)
		printf("Esteghlal");
	else//总分相等
	{
		if(s1>p2)
			printf("Esteghlal");
		else if(s1<p2)
			printf("Persepolis");
		else
			printf("Penalty");
	}
}
