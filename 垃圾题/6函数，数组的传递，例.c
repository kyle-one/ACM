#include <stdio.h>
#define NUMBER 6
int max_of(int vc[],int no)
{
	int i;
	int max=vc[0];
	for(i=1;i<no;i++)
		if (vc[i]>max)
			max=vc[i];
		return(max);
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e,max_m;

	printf("请输入%d个学生的分数.\n",NUMBER);  
	for (i=0;i<NUMBER;i++){
		printf("[%d]英语:",i+1);  scanf("%d",&eng[i]);
		printf("   数学:");   scanf("%d",&mat[i]);
	}
	max_e=max_of(eng[NUMBER],NUMBER);
	max_m=max_of(mat[NUMBER],NUMBER);
	printf("英语的最高分=%d\n",max_e);
	printf("数学的最高分=%d\n",max_m);
	return(0);
}