#include <stdio.h>
int main(void)
{
	int a,b,c;
	b=0;
	do{
		printf("请输入\n");
		scanf("%d",&a);
		if (a<0)
			printf("请输入非负数");
	}while(a<0);
	c=a;

	do{
		a=a/10;
		b=b+1;
	}while(a>0);
	printf("%d",b);
	printf("%d",c);
	return(0);
}
