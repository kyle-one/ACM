#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int i,j,k,vc[101],t,len,sum,aa[100],ab[100],max1,max2;
char vb[1000];
int main(void)
{
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		max1=0;
		max2=0;
		memset(aa,0,sizeof(aa));
		memset(ab,0,sizeof(ab));
		sum=0;
		scanf("%s",vb);
		len=strlen(vb);//5 0 1 2 3 4
		for(j=0;j<len;j+=2)
			aa[vb[j]-'a']++;
		for(j=1;j<len;j+=2)
			ab[vb[j]-'a']++;
		for(j=0;j<26;j++)
		{
			if(aa[j]>max1)
				max1=aa[j];
			if(ab[j]>max2)
				max2=ab[j];
		}
		vc[i]=len-max1-max2;
		//printf("i=%d,max1=%d,max2=%d",i,max1,max2);
	}
	for(i=0;i<t;i++)
		printf("%d\n",vc[i]);
}



	