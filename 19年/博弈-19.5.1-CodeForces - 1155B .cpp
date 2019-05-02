#include <cstdio>
using namespace std;
char vc[100050];
int main(void)
{
	int n;
	int ans=0;
	scanf("%d",&n);getchar();
	scanf("%s",vc);//12 2  14 4(3¸ö8£© 15 5£¨3¸ö8£©
	for(int i=0;i<n-10;i++)//13 3 2¸ö8
		if(vc[i]=='8')
			ans++;
	if(ans>n-10-ans)
		printf("YES");
	else
		printf("NO");
}
