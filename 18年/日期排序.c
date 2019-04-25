/*
题目描述
有一些日期，日期格式为“MM/DD/YYYY”。编程将其按日期大小排列。 
*/

#include <stdio.h>
struct t
{
	int y;
	int m;
	int d;
}vc[100],tmp;
int main(void)
{
	int i=0,k,j;
	while(scanf("%d/%d/%d",&vc[i].m,&vc[i].d,&vc[i].y)==3)
		i++;//i为样例个数
	for(j=i-1;j>0;j--)
		for(k=0;k<j;k++)
			if(vc[k].d>vc[k+1].d)
			{
				tmp=vc[k];
				vc[k]=vc[k+1];
				vc[k+1]=tmp;
			}
	for(j=i-1;j>0;j--)
		for(k=0;k<j;k++)
			if(vc[k].m>vc[k+1].m)
			{
				tmp=vc[k];
				vc[k]=vc[k+1];
				vc[k+1]=tmp;
			}
	for(j=i-1;j>0;j--)
		for(k=0;k<j;k++)
			if(vc[k].y>vc[k+1].y)
			{
				tmp=vc[k];
				vc[k]=vc[k+1];
				vc[k+1]=tmp;
			}
	for(j=0;j<i;j++)
		printf("%02d/%02d/%04d\n",vc[j].m,vc[j].d,vc[j].y);


}
