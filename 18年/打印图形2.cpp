#include <stdio.h>//A 65  Z 90
int main(void)
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)//i控制行数,j控制空格和字母
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=i;j<n;j++)
			printf("%c",65+j);
		for(j=0;j<n-i-1;j++)
			printf("%c",65+n-2-j);
		printf("\n");
		
	}
	for(i=0;i<n-1;i++)
	{
		for(j=n-1-i;j>1;j--)
			printf(" ");
		for(j=i+1;j>=0;j--)
			printf("%c",65+n-j-1);
		for(j=1;j<=i+1;j++)
			printf("%c",65+n-j-1);
		printf("\n");
	}





}


