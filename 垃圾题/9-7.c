#include <stdio.h>
int main(void)
{
	int i;
	char cs[3][128];
	for(i=0;i<3;i++){
		printf("cs[%d]:",i);
		scanf("%s",cs[i]);
	}

	for (i=0;i<3;i++)
		printf("%s ",cs[i]);
	return(0);
}