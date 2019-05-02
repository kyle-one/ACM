#include <stdio.h>
void rev_intary(const int vc[],int no)
{
	int i,a;
	for(i=0;i<no/2;i++){
		a=vc[i];
		vc[i]=vc[no-i-1];
		vc[no-i-1]=a;
	}
}
int main(void){
	int no,i;
	int vc[100];
	printf("你要输入几个数字");scanf("%d",&no);
	for(i=0;i<no;i++){
		printf("NO.%d:",i+1);
		scanf("%d",&vc[i]);
	}
	rev_intary(vc,no);
	for(i=0;i<no;i++)
		printf("%d\n",vc[i]);
}
		
