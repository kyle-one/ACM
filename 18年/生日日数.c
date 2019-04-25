/*
题目描述
CCC老师的生日是YY年MM月DD日，他想知道自己出生后第一万天纪念日的日期（出生日算第0天）。 
输入
输入有多行，格式为YY MM DD 其中1949<=YY<=2006，日期绝对合法。 
输出
输出有多行。即CCC老师生日第一万天以后的日期，格式为 “Y-M-D”。 
*/
#include <stdio.h>
int main(void)
{
	int y,m,d,i,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d %d %d",&y,&m,&d)!=EOF)
	{
		for(i=0;i<10000;i++)
		{
			if(y%4==0&&y%100!=100||y%400==0)
				day[2]=29;
			else
				day[2]=28;
			d++;
			if(d>day[m])
			{
				m++;
				d=1;
			}
			if(m>12)
			{
				m=1;
				y++;
			}
		}
		printf("%d-%d-%d\n",y,m,d);
	}
}
