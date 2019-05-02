#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char vc[100050],v1[100050],v2[100050];
int main(void)
{
	char ch;
	int sum=0,flag=0;
	int zhi=0;
	while(scanf("%c",&ch)&&ch!='\n')
	{
		if(ch=='a') sum++;
		vc[zhi++]=ch;
	}
	
	if((zhi-sum)%2==1) flag=1;
	int zhi1=0,zhi2=zhi-(zhi-sum)/2;
	//printf("%d %d ",sum,zhi2);
	if(flag==0)
	{
		while(1)
		{
			while(vc[zhi1]=='a') zhi1++;
			if(vc[zhi1++]!=vc[zhi2++]) {flag=1;break;}
			if(zhi2>=zhi) break;
			if(zhi1>=zhi-(zhi-sum)/2) break;
		}
	}
	if(flag==1)
		printf(":(");
	else
		for(int i=0;i<zhi-(zhi-sum)/2;i++)
			printf("%c",vc[i]);
}

