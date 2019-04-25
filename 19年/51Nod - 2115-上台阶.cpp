#include <iostream>
#include <cstdio>
#include <algorithm>

int tai(int a)
{
	if(a==1)
		return 1;
	if(a==2)
		return 2;
	return tai(a-1)+tai(a-2);
}
int main(void)
{
	int i,j,k,n;
	scanf("%d",&n);
	printf("%d",tai(n));
}
