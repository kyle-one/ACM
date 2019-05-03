#include <cstdio>
#include <algorithm>
using namespace std;
int vc[200050];
int main(void)
{
	int n,a,flag=0,sum1=0,sum2=0;
	scanf("%d",&n);
	memset(vc,0,sizeof(vc));
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		vc[a]++;
		if(vc[a]>=3)
			flag=1;}

	if(flag==1)
		printf("NO\n");
	else{
		for(int i=0;i<=200050;i++){
			if(vc[i]>=1)
				sum1++;
			if(vc[i]==2)
				sum2++;}
		printf("YES\n%d\n",sum2);
		for(int i=0;i<200050;i++)
			if(vc[i]==2)
				printf("%d ",i);
		printf("\n%d\n",sum1);
		for(int i=200010;i>=0;i--)
			if(vc[i]>=1)
				printf("%d ",i);
		printf("\n");
	}
}

