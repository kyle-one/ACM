#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	int n,m,a,sum=0;
	int vc[2][2]={0,0,0,0};
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a%2==0)
			vc[0][0]++;
		else
			vc[0][1]++;}
	for(int i=0;i<m;i++){
		scanf("%d",&a);
			if(a%2==0)
				vc[1][0]++;
			else
				vc[1][1]++;}
	sum+=min(vc[0][0],vc[1][1]);
	sum+=min(vc[0][1],vc[1][0]);
	printf("%d",sum);
}

