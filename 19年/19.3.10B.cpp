#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void)
{
	int i,j,k,sum,t,vc[100][2],flag;
	scanf("%d",&t);//1 1 0 1 1
	//被一个隔开，最小的是除以2   6 2   1 0 1 0 1 1
	//被2个隔开除以3
	//7 2                  1 1 0 1 0 1 1
	//8 2  1 1 0 1 1 0 1 1
	for(i=0;i<t;i++)
		scanf("%d%d",&vc[i][0],&vc[i][1]);
	for(i=0;i<t;i++)
	{
		if(vc[i][0]==vc[i][1])
			printf("%d %d\n",vc[i][0],vc[i][0]);
		else if(vc[i][1]==0)
			printf("0 0\n");
		else
		{
			flag=vc[i][0]-vc[i][1];//分割点 2
			if((vc[i][0]-flag)%(flag+1)!=0)
				flag=(vc[i][0]-flag)/(flag+1)+1;
			else
			flag=(vc[i][0]-flag)/(flag+1);
			if(flag<=0)
				flag=1;
			printf("%d %d\n",vc[i][1],flag);
		}



	}
}