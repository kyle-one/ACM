#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int f[15],d[15]={0};
int main(void)
{
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=12;i++)
		d[i]=2*d[i-1]+1;
	f[0]=0;
	for(int i=1;i<=12;i++)
		for(int j=0;j<i;j++)
			f[i]=min(f[i],f[j]*2+d[i-j]);
	for(int i=1;i<=12;i++)
		printf("%d\n",f[i]);
}

