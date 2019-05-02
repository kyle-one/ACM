#include <stdio.h>
void put(const char str[])
{
	int a;
	int i= 0;
	while(str[i])
		i++;
	for(a=i-1;a>0;a--)
	{
		printf("%s",str[a-1]);
	}
}

int main(void)
{
	char b[19];
	scanf("%s",b);
	put(b);
}
