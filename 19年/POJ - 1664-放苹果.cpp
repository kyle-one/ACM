#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

  
int f(int m,int n)//m为苹果，n为盘子
{
	if(m<n)//盘子多于苹果   去掉多余的盘子
		return f(m,m);
	if(m==0)
		return 1;
	if(n==0)
		return 0;
	//盘子少于苹果   1.有空盘子   2.无空盘子 
	return f(m,n-1)+f(m-n,n);//盘子空一个的情况和盘子不为空的情况
}

int main(void)
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cout<<f(m,n)<<endl;
	}
	return 0;
}
