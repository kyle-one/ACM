#include <stdio.h>
void sumum(int vc[5][3],int sum[5])
{
	int i,j;
	for(i=0;i<5;i++){
		sum[i]=0;
		for(j=0;j<3;j++)
			sum[i]+=vc[i][j];
	}
}
int main(void){
	int vb[5][3];
	int s[5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("vb[%d][%d]:",i,j);
			scanf("%d",&vb[i][j]);
		}
	}
	sumum(vb,s);
	printf("%d %d %d %d %d",s[0],s[1],s[2],s[3],s[4]);

}
