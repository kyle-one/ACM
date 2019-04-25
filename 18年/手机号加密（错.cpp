#include <stdio.h> //0 48,
#include <string.h>

int len(int a)
{
	int leng=0,b=a;
	while(b>0)
	{
		leng++;
		b/=10;
	}
	return leng;
}

int main(void)
{
	long long  int i=0,j,k=0,a,b,vb[31];
	char vc[30];
	scanf("%d",&a);
	b=a;vb[0]=1;
	for(i=1;i<30;i++)//1,2,4,8,
		vb[i]=vb[i-1]*2;
	i=0;
	while(1)
	{
		if(b>0)
		{
			vc[i++]=b%2+48;
			b/=2;
		}
		else
			break;
	}
	while(i<29)
		vc[i++]='0';
	for(j=26;j>=0;j--)
		k+=(vc[j]-48)*vb[26-j];

	//printf("%d\n",'1'-48);
	//for(j=0;j<27;j++)
		//printf("%c",vc[j]);
	//k=1000001000;
	if(k>9999999)
	{
		k=k%100000000;
		if(k>9999999)//防止出现1000001000之类的情况
			printf("%d",k);
	}
	if(k<=9999999)
	{
		for(i=len(k);i<8;i++)
			printf("0");
		printf("%d",k);
	}
	//printf("\n%d",len(k));
}



