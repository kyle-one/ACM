#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=20000050;//记得开大！
int i,j,k,n,ux,vx,vc[maxn],max1,min1,uy[1000],vy[1000],sum=0,t,max2;
int main(void)
{
	scanf("%d",&n);
	max1=-1;
	min1=10500000;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&ux,&uy[i],&vx,&vy[i]);
		if(uy[i]>max1)
			max1=uy[i];//max1用于保存数组最大值
		if(vy[i]<min1)
			min1=vy[i];//min1是最小值:比如min1=-6
		vc[vy[i]+10000000]++;
		vc[uy[i]+10000000-1]--;
	}
	max2=vc[min1+10000000];
	for(i=min1+10000001;i<=max1+10000000;i++)
	{
		vc[i]+=vc[i-1];
		if(vc[i]>max2)
			max2=vc[i];//找到最大的区间
	}
	sum+=max2;
	//在uy,vy中找到对应的板子并删除
	for(i=0;i<n;i++)
	{
		if(uy[i]>=max2&&max2>=vy[i])
		{
			vc[vy[i]+10000000]--;
			vc[uy[i]+10000000-1]++;
		}
	}
	max2=0;
	for(i=min1+100000001;i<=max1+100000000;i++)
	{
		vc[i]+=vc[i-1];
		if(vc[i]>max2)
			max2=vc[i];//找到最大的区间
	}
	sum+=max2;
	printf("%d",sum);
	printf("gsrgrsrg");
	return 0;
	
}
/*
1.区间更新，判断出最多重合的区间
2.每个区间应该有对应的电路板的编号
3.识别最大的的编号，并且讲每个区间的对应编号剔除
4.再一次识别最大的编号即可


*/





