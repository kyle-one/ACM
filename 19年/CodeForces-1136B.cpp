#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*题意：第一个数字代表总的洞数量，第二个数字代表所在位置
首先可以知道，只能相邻间移动，所以路程数是一定的，可以先算出来
先向短的一边移动，走到底在走向另一边，我的算法为短距*2+长距，当然你可以用更简单的，我当时没想到
其次是拿石头操作与拿硬币操作，经过自己模拟可得前两次要5个操作，后面的每个洞操作两次即可
因此得出操作数：见代码

注意：一开始在两端的时候算法另外设计，我的算法不包含这两个特例
//拿出第一个洞，以后的石头就可以丢里面去了
//4 2      1 0 0 1 1 1   13-5    8
//走的路程的确定的
//4 2     0 1 0 0  路程 4  +5+4
//5 1     1 0 0 0 0  路程4 + 5 + 6
//6 3     0 0 1 0 0 0
//8 4     0 0 0 1 0 0 0 0
//10 4    0 0 0 1 0 0 0 0 0 0
//9 5     0 0 0 0 1 0 0 0 0
//2 2     0 1
*/
int main(void)
{
	int i,j,k,s,sum,a,b;
	cin>>a>>b;
	if(b!=1&&b!=a)
	{
	k=min(b-1,a-b);//算出最短距离
	s=a-k;//1在里面
	j=k*2+s-1+5+(a-2)*2;
	cout<<j<<endl;
	}
	else
	{
		cout<<5+(a-2)*2+a-1<<endl;
	}

}