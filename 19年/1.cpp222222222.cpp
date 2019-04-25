#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
double x,m0=1.046,m1=0.138,g=0.98,t1,r=0.044,R=0.09,tx,t0=1.40,H=0.434,I0,Rx=0.02962/2;
double Ix,I1x,a,I1,m=0.378,wu,Ishi,Igong;
const double pi=3.14159265358979323846264338328;
double R1=0.0994/2,R2=0.01/2;
int main(void)
{
while(1)
{
	printf("请输入T的数值：");
	cin>>t1;
	Igong=m1*Rx*Rx/2;
	Ishi=(g*r*R*((m+m)*t1*t1-m0*t0*t0))/(4*pi*pi*H);
	wu=abs(Igong-Ishi)/Igong;
	printf("Igong=%.8f,Ishi=%.8f,wu=%.8f",Igong,Ishi,wu);

}



}