#include <stdio.h>
int min_of(int vc[],int no)
{
	int i;
	int min=vc[0];
	for(i=0;i<no;i++){
		if (vc[i]<min)
			min=vc[i];
	}
	return(min);
}

int main(void){
	int a,b;
	int vb[100];
	puts("你要输入几个数字");  scanf("%d",&a);
	for (b=0;b<a;b++){
		printf("NO.%d:",b+1);
		scanf("%d",&vb[b]);
	}
	printf("%d",min_of(vb,a));
}




