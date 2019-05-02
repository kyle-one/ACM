#include <stdio.h>
void put(const char str[],int no)
{
	int i;
	for(i=0;i<no;i++)
		printf("%s\n",str);
}

int main(void)
{
	int no;
	char str[10];
	scanf("%s %d",str,&no);
	put(str,no);
}