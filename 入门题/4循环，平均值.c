#include <stdio.h>
int main(void)
{
	int a,b,c,sum,ping;
	puts("你要输入几个数");
	scanf("%d",&a);
	b=0;sum=0;

	while(b<=a){
		b++;
		printf("no.%d:",b);
		scanf("%d",&c);
		sum+=c;
	}
	printf("%d\n",sum);
	printf("%.2lf\n",(double)sum/a);
	return(0);
}
