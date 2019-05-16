#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int lowbit(int x){return x&(-x);}//loubit!!!
int vc[50005];
void update(int x,int y,int n)//更新!!!
{
	for(int i=x;i<=n;i+=lowbit(i))
		vc[i]+=y;
}
int queey(int x,int y)//询问!!!
{
	int ans=0;
	for(int i=x-1;i>0;i-=lowbit(i))
		ans+=vc[i];
	return ans;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	for(int j=1;j<=T;j++)
	{
		memset(vc,0,sizeof(vc));
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)//留出第一位!!!切记!!!不然询问时会出错!!!
		{
			int z;
			scanf("%d",&z);
			update(i,z,n);
		}
		printf("Case %d:\n",j);
		while(1)
		{
			char chs[10];int a,b;
			scanf("%s",chs);
			if(chs[0]=='E') break;
			scanf("%d%d",&a,&b);
			//getchar();
			if(chs[0]=='A')
			update(a,b,n);
			else if(chs[0]=='Q')
				printf("%d\n",queey(b)-queey(a-1));
			else
				update(a,-b,n);
	}
	}
	return 0;
}

	
