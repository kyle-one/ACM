#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
double x,m0=1.046,m1=0.138,g=0.98,r=0.044,R=0.09,tx,H=0.434,I0,Rx=0.02962/2,Ix,I1x,a;
const double pi=3.14159265358979323846264338328;
int main(void)
{
while(1)
{
	cout<<"请输入2x的数值与周期Tx："<<endl;
	cin>>x>>tx;
	x=x/2;
	I0=//I0还没有计算！！！
	Ix=(((m0+2*m1)*g*R*r*tx*tx)/(4*pi*pi*H)-I0)/2;
	I1x=m1*x*x+m1*Rx*Rx/2;
	a=abs(Ix-I1x)/I1x;
	printf("%.5f    %.5f     %.5f\n",Ix,I1x,a);

}
}


