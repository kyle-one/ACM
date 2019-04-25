#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f;//a为循环的次数，c为a的个位数，d为a/10,e判断1234567890整体的循环次数，f判断个位数的循环次数
	scanf("%d",&a);
	b=0;
	if(a<=9)
		while(b<a){
			b++;

			printf("%d",b);
	}
		else{
			c=a/10;
			d=a%10;e=1;f=1;
			while(e<=c){
				printf("1234567890");
				e++;
			}
			while(f<=d){
				printf("%d",f);
				f++;
			}
		}
	return(0);
}


