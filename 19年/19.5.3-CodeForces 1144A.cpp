#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(void)
{
	int n,flag=0;
	char vc[150];
	scanf("%d",&n);
	while(n--)
	{
	flag=0;
	scanf("%s",vc);
	if(strlen(vc)>26)
		printf("No\n");
	else{
		sort(vc,vc+strlen(vc));
		for(int i=0;i<strlen(vc)-1;i++){
			if(vc[i]!=vc[i+1]-1){
				flag=1;break;}}
		if(flag==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	}
}

