#include <stdio.h>
int main(void)
{
	float a,b;
	int i;
	while(scanf("%f %f",&a,&b!=EOF))
	{
		for(i=1;;i++)
			if(i*(b/100)-i*(a/100)==1)
			{
				printf("%d\n",i);
				break;
			}
	}
}