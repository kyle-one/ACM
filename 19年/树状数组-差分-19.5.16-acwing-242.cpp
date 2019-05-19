#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int lowbit(int a){return a&-a;}
int vc[500005],va[500005]={0};
//把点更新，区间求和 -> 点求和 区间更新
//利用差分的思想!!!
void update(int a,int b,int n)
{
	for(int i=a;i<=n;i+=lowbit(i))
		vc[i]+=b;
}
int queey(int a)
{
	int ans=0;
	for(int i=a;i>0;i-=lowbit(i))
		ans+=vc[i];
	return ans;
}
int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);
	memset(vc,0,sizeof(vc));
	for(int i=1;i<=n;i++)
		scanf("%d",&va[i]);
	for(int i=1;i<=n;i++)
		update(i,va[i]-va[i-1],n);
	for(int i=0;i<m;i++)
	{
		char ch;
		int a,b,c;
		getchar();
		scanf("%c",&ch);
		if(ch=='Q'){
			scanf("%d",&a);
			printf("%d\n",queey(a));
		}
		else{
			scanf("%d%d%d",&a,&b,&c);
			update(a,c,n);
			update(b+1,-c,n);
		}
	}
}

