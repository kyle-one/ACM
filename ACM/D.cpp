#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(void)
{
	int i,j,k,n,len;
	char vc[25][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",vc[i]);
	}
	for(i=0;i<n;i++)
	{
		len=strlen(vc[i]);
		if(vc[i][len-1]=='a')
			printf("%ss\n",vc[i]);
		else if(vc[i][len-1]=='i'||vc[i][len-1]=='y')
		{
			vc[i][len-1]='i';
			printf("%sos\n",vc[i]);
		}
		else if(vc[i][len-1]=='l')
			printf("%ses\n",vc[i]);
		else if(vc[i][len-1]=='n')
		{
			vc[i][len-1]='a';
			printf("%snes\n",vc[i]);
		}
		else if(vc[i][len-1]=='e'&&vc[i][len-2]=='n')
		{
			vc[i][len-2]='a';
			vc[i][len-1]='n';
			printf("%ses\n",vc[i]);
		}
		else if(vc[i][len-1]=='o')
			printf("%ss\n",vc[i]);
		else if(vc[i][len-1]=='r')
			printf("%ses\n",vc[i]);
		else if(vc[i][len-1]=='t')
			printf("%sas\n",vc[i]);
		else if(vc[i][len-1]=='u')
			printf("%ss\n",vc[i]);
		else if(vc[i][len-1]=='v')
			printf("%ses\n",vc[i]);
		else if(vc[i][len-1]=='w')
			printf("%sas\n",vc[i]);
		else
			printf("%sus\n",vc[i]);
	}
}