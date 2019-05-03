#include <cstdio>
#include <algorithm>
using namespace std;
//阅读到，读到过的数字最大的页数
int vc[10050];
int main(void)
{
	int n,sum=0,max1=-999;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&vc[i]);
	for(int i=1;i<=n;i++){
		if(max1<vc[i])
			max1=vc[i];
		if(i==max1)
			sum++;}
	printf("%d",sum);
}



