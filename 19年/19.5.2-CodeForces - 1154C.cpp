#include <cstdio>
#include <algorithm>
using namespace std;
//1 4 7 鱼 vc[0]    3 
//2 6 兔 vc[1]      2 
//3 5 鸡肉 vc[2]    2
int main(void)
{
	int vc[4];
	int vb[4],va[4];
	int sum=0;
	int min1=0,max1=-999,flag=0,flag1;//最少的食物的天数
	for(int i=0;i<3;i++)
		scanf("%d",&vc[i]);
	vb[0]=vc[0]/3;vb[1]=vc[1]/2;vb[2]=vc[2]/2;
	//先将连续能活的周数求出来
	min1=min(min(vb[0],vb[1]),vb[2]);
	//printf("min1=%d\n",min1);
	sum+=min1*7;
	vc[0]-=min1*3;vc[1]-=min1*2;vc[2]-=min1*2;
	for(int i=0;i<3;i++) va[i]=vc[i];
	//printf("%d %d %d ",vb[0],vb[1],vb[2]);
	for(int i=0;i<7;i++){//从每个星期开始都测试一遍
		flag=0;flag1=0;
		for(int i=0;i<3;i++) vc[i]=va[i];
		if(i==0){
			//if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			//printf("%d\n",flag);
		}
		if(i==1){
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
		}
		if(i==2){
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;}
		if(i==3){
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
		}
		if(i==4){
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;}
		if(i==5){
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;}
		if(i==6){
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[0]>0&&flag1==0)flag++,vc[0]--;else flag1=1;
			if(vc[2]>0&&flag1==0)flag++,vc[2]--;else flag1=1;
			if(vc[1]>0&&flag1==0)flag++,vc[1]--;else flag1=1;}
		if(max1<flag)
			max1=flag;
	}
	sum+=max1;
	printf("%d",sum);
}






			







