#include <stdio.h>

double power(double dx,int no)
{
	int i;
	double tmp=1.0;
	for(i=1;i<=no;i++)
		tmp *= dx;
	return (tmp);
}

int main(void)
{
	int n;
	double x;
	printf("shuru:");  scanf("%lf",&x);
	printf("shuru:");  scanf("%d", &n);
	printf("%.2f\n",power(x,n));
	return(0);
}