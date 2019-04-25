#include <stdio.h>
int main(void)
{
	int i,j,k,sum=0;
	double n,m,bmi;
	scanf("%lf%lf",&n,&m);
	n/=100;
	bmi=m/(n*n);
	//printf("%d",(int)bmi);
	//printf("%f ",bmi);
	if(bmi=18&&bmi<=24)
		printf("Good!");
	if(bmi<18)
		printf("Too thin!");
	if(bmi>24)
		printf("Too fat!");
	//printf("%d",(int)(bmi*10000)%10000);
	if(bmi>24)
	{
	while(1)
	{
		if(m/(n*n)>24)
		{
			m-=1;
			sum++;
		}
		else
			break;
	}
	}
	if(bmi<18)
	{
	while(1)
	{
		if(m/(n*n)<18)
		{
			m+=1;
			sum++;
		}
		else
			break;
	}
	}
	printf("\n%d",sum);



}