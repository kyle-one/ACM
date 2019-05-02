#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	int vc[5];
	for(int i=0;i<4;i++)
		scanf("%d",&vc[i]);
	sort(vc,vc+4);//Ð¡µ½´ó
	printf("%d %d %d\n",vc[3]-vc[0],vc[3]-vc[1],vc[3]-vc[2]);
}