#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int num[25];//录入的社团数、
int ans[25];

int main(){
    int T;
    cin>>T;
    while(T--){
        memset(ans,0,sizeof(ans));
        int n;//n为社团数
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++) 
			scanf("%d",&num[i]),sum+=num[i];//求出总人数
        sum/=2;//人数除以2  
        for(int i=0;i<(1<<n);i++)//i十进制直接和后者二进制数字比较    循环全组合次
		{
            int add=0;
            for(int j=1;j<=n;j++) //循环n次
				if((i>>(j-1))&1) //从1到n位是不是1？是的话add+那个社团人数
					add+=num[j];
            if(add>sum){//如果add大于总人数的一半
                for(int j=1;j<=n;j++)//从1到n，判断是否满足关键加入者
				{
                    if((i>>(j-1))&1 && add-num[j]<=sum) //某一个数为1证明该社团在获胜队伍中，第二个条件证明为关键加入者
						ans[j]++;//这个社团的权力指数+1
                }
            }
        }
        for(int i=1;i<=n;i++) 
			printf("%s%d",i==1?"":" ",ans[i]);
        printf("\n");
    }
}
