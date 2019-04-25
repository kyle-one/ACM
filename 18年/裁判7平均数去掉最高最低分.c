#include <stdio.h>
struct a
{
	double vc[7];
	char vb[31];
};
double max(struct a c)
{
	int i;
	double b=c.vc[0];
	for(i=1;i<7;i++)
		if(c.vc[i]>b)
			b=c.vc[i];
	return(b);
}
double min(struct a c)
{
	int i;
	double b=c.vc[0];
	for(i=1;i<7;i++)
		if(c.vc[i]<b)
			b=c.vc[i];
	return(b);
}
int main(void)
{
	int i;
	double sum;
	struct a a;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %s",&a.vc[0],&a.vc[1],&a.vc[2],&a.vc[3],&a.vc[4],&a.vc[5],\
		&a.vc[6],a.vb)!=EOF)
	{
		sum=0;
		for(i=0;i<7;i++)
			sum+=a.vc[i];
		sum=sum-max(a)-min(a);
		sum=sum/5.0;
		printf("%s %.2lf\n",a.vb,sum);
	}
}