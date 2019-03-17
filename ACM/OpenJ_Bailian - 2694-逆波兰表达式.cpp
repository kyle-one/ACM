#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
double exp()
{
	char s[20];
	cin>>s;
	switch(s[0])
	{
	case '+': return exp()+exp();break;
	case '-':return exp()-exp();break;
	case'*':return exp()*exp();break;
	case '/':return exp()/exp();break;
	default:return atof(s);
		break;
	}
}
int main()
{
	printf("%lf",exp());
	return 0;
}
