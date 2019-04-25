#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

int main(void)
{
	long long int sum1,n,i,a,b;
	stack<long long int> h;
	sum1=0;
	scanf("%lld",&n);
	scanf("%lld",&a);
	h.push(a);//1
	n--;
	while(n--)//54321
	{
		scanf("%lld",&a);
		while(!h.empty()&&a>=h.top())
		//while(a>=h.top()&&!h.empty())
			h.pop();//
		h.push(a);
		sum1+=h.size()-1;
		
	}
	printf("%lld",sum1);
	return 0;
}




