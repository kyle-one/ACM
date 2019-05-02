#include <stdio.h>
int main(void)
{
	int a,b,c;//a输入层数，b控制层数，c控制空格
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=1;c<b;c++)
			printf(" ");
		for(c=1;c<=(2*a-2*b+1);c++)
			printf("*");
		printf("\n");
	}
	return(0);
}

