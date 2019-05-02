#include <cstdio>
#include <algorithm>
using namespace std;
//只有后面四个字母为ACTG即可
//顺序：ACTG CTGA TGAC GACT  对比步骤更少
int main(void)
{
	
	int n;
	char vc[100];
	scanf("%d",&n);
	scanf("%s",vc);
	int sum=9999;int flag;
	/*flag[0]+=min(abs(vc[0]-'A'),abs(26-abs(vc[0]-'A')));
	flag[0]+=min(abs(vc[1]-'C'),abs(26-abs(vc[1]-'C')));
	flag[0]+=min(abs(vc[2]-'T'),abs(26-abs(vc[2]-'T')));
	flag[0]+=min(abs(vc[3]-'G'),abs(26-abs(vc[3]-'G')));*/
	for(int i=0;i<=n-4;i++)
	{
		flag=0;
		flag+=min(abs(vc[i]-'A'),abs(26-abs(vc[i]-'A')));
		flag+=min(abs(vc[1+i]-'C'),abs(26-abs(vc[1+i]-'C')));
		flag+=min(abs(vc[2+i]-'T'),abs(26-abs(vc[2+i]-'T')));
		flag+=min(abs(vc[3+i]-'G'),abs(26-abs(vc[3+i]-'G')));
		if(sum>flag)
			sum=flag;
	}
	printf("%d",sum);
}


