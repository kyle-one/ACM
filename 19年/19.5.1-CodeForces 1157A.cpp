#include <cstdio>
#include <set>
using namespace std;
set<int> jihe;
int qu(int a)
{
	int b=a;
	while(b%10==0){
		b/=10;}
	return b;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	jihe.emplace(n);
	n+=1;n=qu(n);
	while(jihe.find(n)==jihe.end()){
		jihe.emplace(n);
		n++;n=qu(n);}
	printf("%d",jihe.size());


}


