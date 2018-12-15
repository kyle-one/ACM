#include <stdio.h>//A 65  Z 90
#include <string.h>
int main(void)
{
	int i,j,k,n,flag;
	char vc[28][11],tmp[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",vc[i]);
	for(i=n-1;i>0;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
			if(strcmp(vc[j],vc[j+1])>0)
			{
				strcpy(tmp,vc[j]);
				strcpy(vc[j],vc[j+1]);
				strcpy(vc[j+1],tmp);
				flag=1;
			}
		if(flag==0)
			break;
	}
	for(i=0;i<n;i++)
		printf("%s ",vc[i]);
}


