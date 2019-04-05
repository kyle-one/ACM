#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
int i,j,k,n,d,a,b,flag;
set<int> vc,zong;
int main(void)
{
	scanf("%d%d",&n,&d);
	for(i=0;i<d;i++)
	{
		vc.clear();
		scanf("%d%d",&a,&b);
		for(j=a;j<=b;j++)
			zong.insert(j);
		vc=zong;
		flag=0;

		while(1)
		{
			a=*vc.begin();//1 2 3   
			while(vc.find(*vc.begin()+1)!=vc.end()\
				&&vc.find(*vc.begin())!=--vc.end())//找到的第一个元素+1
			{
				vc.erase(*vc.begin());
			}
			b=*vc.begin();
			if(flag==0)
			{
				printf("[%d,%d]",a,b);
				flag=1;
			}
			else
				printf(",[%d,%d]",a,b);
			vc.erase(*vc.begin());
			if(vc.size()==0)
				break;
		}
		printf("\n");
	}
}