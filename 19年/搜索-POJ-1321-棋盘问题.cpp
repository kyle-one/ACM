#include <cstdio>
#include <algorithm>
using namespace std;
char mapp[10][10];
int ji[10],k=0,cout=0,n,m,a=0;//k表示行数，cout表示种数，ji标记是否被搜索过,n棋盘大小，m棋子总个数，a棋子当前使用次数

void dfs(int k)
{
	int i,j;//i表示列数，
	if(a==m)
	{
		cout++;
		return;
	}
	if(k>=n)
		return;
	for(i=0;i<n;i++)
	{
		if(ji[i]==0&&mapp[k][i]=='#')
		{
			ji[i]=1;
			a++;
			dfs(k+1);
			ji[i]=0;
			a--;
		}
	}
	dfs(k+1);
}

int main(void)
{
	int i,j;//
	while(scanf("%d %d",&n,&m)!=EOF&&n!=-1&&m!=-1)
	{
		a=0;
		cout=0;
		k=0;
		memset(ji,0,sizeof(ji));
		for(i=0;i<n;i++)
			scanf("%s",mapp[i]);
		dfs(0);
		printf("%d\n",cout);

	}
	return 0;
}


