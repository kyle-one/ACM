#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> ji,ou;
bool complare(int a,int b){
	return a>b;}
int main(void)
{
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum+=a;
		if(a%2==0)
			ou.push_back(a);
		else
			ji.push_back(a);}
	sort(ou.begin(),ou.end());
	sort(ji.begin(),ji.end());
	int min1=min(ji.size(),ou.size());
	while(min1--){
		sum-=ou.back();sum-=ji.back();
		ou.pop_back();ji.pop_back();}
	if(ji.size()==ou.size())
		printf("%d",sum);
	else{
		if(ji.size()==0)
			printf("%d",sum-ou.back());
		else
			printf("%d",sum-ji.back());
	}
}