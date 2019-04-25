#include <stdio.h>
int min3(int x,int y,int z){
	int min=x;
	if (y < min)
		min=y;
	if (z < min)
		min=z;
	return(min);
}

int main(void){
	int na,nb,nc;
	scanf("%d%d%d",&na,&nb,&nc);
	printf("%d\n",min3(na,nb,nc));

	return(0);
}