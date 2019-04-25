#include <stdio.h>
int main(void)
{
	int i,key,j;
	int vc[5];
	scanf("%d %d %d %d",&vc[0],&vc[1],&vc[2],&vc[3]);

	for(i=0;i<4;i++)
	{
		key=i;
		for(j=i+1;j<3;j++)
		{
			if (vc[j]<vc[key])
				key =j;
		}

		if (key!=i)
		{
			int tmp=vc[key];vc[key]=vc[i];vc[i]=tmp;
		}
	}
	printf("%d %d %d %d",vc[0],vc[1],vc[2],vc[3]);
}
			
