#include <stdio.h>
int str_char(const char s[])
{
	int idx=0;
	int num=0;
	while(s[idx])
	{
		if(s[idx] == 'c')
			num++;
		idx++;
	}
	return (num);
}

int main(void)
{
	char c;
	char s[10];
	scanf("%s",s);
	printf("%d",str_char(s));
	return(0);
}