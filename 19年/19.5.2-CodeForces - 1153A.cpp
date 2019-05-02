#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,t;
struct Che{
	int qi,ge;
	Che(int qi=0,int ge=0):qi(qi),ge(ge){}
}vc[105];
int va[105];
int main(void){
	scanf("%d%d",&n,&t);
	int min1=999999,mini;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&vc[i].qi,&vc[i].ge);
		if(vc[i].qi>t) 
			va[i]=vc[i].qi;
		else{
			va[i]=((t-vc[i].qi)/vc[i].ge)*vc[i].ge+vc[i].qi;
			//printf("%d ",va[i]);
			while(va[i]<t) va[i]+=vc[i].ge;
			}
		if(min1>va[i]){
			min1=va[i];mini=i;
		}
		//printf("%d",va[i]);
	}

	//求出每辆车最靠近t的时间 注意：可能起点就比t大
	printf("%d",mini);
}

	


