#include <stdio.h>
int main(void)
{
	double a,vc[100];
	int i;
	vc[0]=1;
	vc[1]=3;
	for(i=2;i<30;i++)
		vc[i]=vc[i-1]*3;
	while(scanf("%lf",&a)!=EOF,a)
	{
		if(a==1)
			printf("0\n");
		for(i=0;i<50;i++)
			if(a>vc[i]&&a<=vc[i+1])
			{
				printf("%d\n",i+1);
				break;
			}

	}
}


