#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int sum2,sum1[25];
void Hanoi(int n,char src,char mid,char dest)
{
	if(n==1)
	{
		//cout<<src<<"->"<<dest<<endl;
		sum2++;
		return;
	}
	Hanoi(n-1,src,dest,mid);
	//cout<<src<<"->"<<dest<<endl;
	sum2++;
	Hanoi(n-1,mid,src,dest);
	return;
}
int main(void)
{
	int a,i;
	for(i=1;i<=20;i++)
	{
		sum2=0;
		Hanoi(i,'A','B','C');
		sum1[i]=sum2;
	}
	while(scanf("%d",&a)!=EOF)
	{
		printf("%d\n",sum1[a]);
	}
}
