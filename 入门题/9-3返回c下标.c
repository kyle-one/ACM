#include <stdio.h>
int str_char(const char s[])
{
	int idx=0;
	while(s[idx])
	{
		if(s[idx] == 'c')
			return idx;
		idx++;
	}
	return -1;
}

int main(void)
{
	char c;
	char s[10];
	scanf("%s",s);
	printf("%d",str_char(s));
	return(0);
}