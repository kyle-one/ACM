#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,k,vc[5][2],sum1=0,sum2=0,flag=0,c=0,b=0,flag2;
	char a[151];
	//freopen("D:\\4.txt","r",stdin);
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(flag<4)
		{
			if(a[i]=='A')
				sum1++;
			if(a[i]=='B')
				sum2++;
			if(((sum1>24||sum2>24)&&(sum1-sum2>=2||sum2-sum1>=2)))
			{
				vc[flag][0]=sum1;
				vc[flag++][1]=sum2;
				sum1=0;
				sum2=0;
			}
		}
		else
		{
			if(a[i]=='A')
				sum1++;
			if(a[i]=='B')
				sum2++;
			if(((sum1>14||sum2>14)&&(sum1-sum2>=2||sum2-sum1>=2)))
			{
				vc[flag][0]=sum1;
				vc[flag++][1]=sum2;
				sum1=0;
				sum2=0;
			}
		}
	}
	for(i=0;i<flag;i++)
	{
		if(vc[i][0]>vc[i][1])
			b++;
		else
			c++;
	}
	//printf("%d %d\n",b,c);
	if(b>c)
		printf("A\n");
	else
		printf("B\n");
	for(i=0;i<flag;i++)
		printf("%d:%d\n",vc[i][0],vc[i][1]);
}