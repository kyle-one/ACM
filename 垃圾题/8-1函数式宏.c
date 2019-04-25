#include <stdio.h>
#define max(x,y)((x)>(y)?(x):(y))
int main(void){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n%d\n",max(max(a,b),max(c,d)),max(max(max(a,b),c),d));
}