#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
char vc[1000010];
int main(void)
{
	int i,j,k,len,flag=0,flag1=0;
	while(scanf("%s",vc)!=EOF)
	{
		flag1=0;
		len=strlen(vc);
		for(i=1;i<=len/2;i++)
		{
			flag=0;
			if(len%i==0)
			{
				//i=1,j=1,vc
				for(j=i;j<len;j++)//aoao 
					if(vc[j]!=vc[j%i])//
					{
						flag=1;
						//printf("di1 %d ",i);
						break;
					}
			}
			else
			{
				//printf("di2 %d",i);
				continue;
			}
			if(flag==0)
			{
				flag1=1;
				printf("%d\n",i);
				break;
			}
		}
		if(flag1==0)
			printf("%d\n",len);
	}
	return 0;
}


