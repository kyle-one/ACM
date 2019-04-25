#include <stdio.h>//82
int main(void)
{
	int i,j,k;
	long long int sum,p,a=0,b=0;
	scanf("%lld",&p);
	while(1)//34
	{
		if(p>82)
		{
			b++;
			p-=33;
		}
		else
			break;
	}
	if(p>66&&p<=82)
	{
		b++;
		a++;
	}
	if(p<=33)
		b++;
	if(p>33&&p<=49)
		a++;
	if(p>49&&p<=66)
		b+=2;

	printf("%lld",b*1900+a*3300);
}

