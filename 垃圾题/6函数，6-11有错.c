#include <stdio.h>

void top(const int vc[5][3],int max[5])
{
	int i,j;
	for(i=0;i<5;i++){
		max[i]=vc[i][0];
		for(j=0;j<3;j++){
			if (vc[i][j] > max[i])
				max[i]=vc[i][j];
		}
	}
}

void ave(const int vc[5][3],int ping[5])
{
	int i,j;
	for(i=0;i<5;i++){
		ping[i]=0;
		for(j=0;j<3;j++){
			ping[i]+=vc[i][j];

		}
	}
}
int main(void){
	int i,j;
	int vc[5][3],max[3],ping[5] ;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("ÇëÊäÈëvc[%d][%d]:",i,j);
			scanf("%d",&vc[i][j]);
		}
	}
	top(vc,max);
	ave(vc,ping);

	for(i=0;i<5;i++)
		printf("%d  ",max[i]);

	for(i=0;i<5;i++)
		printf("%d  ",ping[i]);

	return(0);

}
			

