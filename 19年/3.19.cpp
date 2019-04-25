#include <algorithm>
#include <cstdio>
using namespace std;
int vc[4][13],aa[14],n,flag=0,sum=0;//n 等下输入共几行
void f(int k)//k表示第几行
{
	int i,j;
	if(k==n)
	{
		if(flag<3)
		{
			for(i=0;i<n;i++)
				vc[flag][i]=aa[i];
			flag++;
		}
		sum++;
		return;
	}
	for(i=0;i<n;i++)//每一列检测是否冲突
	{
		for(j=0;j<k;j++)
		{
			if(aa[j]==i||abs(aa[j]-i)==abs(k-j))
				break;
		}
		if(j==k)
		{
			aa[k]=i;
			f(k+1);
		}
	}
}
int main(void)
{
	int i,j;
	scanf("%d",&n);
	f(0);
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",vc[i][j]+1);
		printf("\n");
	}
	printf("%d\n",sum);
}


		
