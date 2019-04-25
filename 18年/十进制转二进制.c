#include <stdio.h>
int main(void)
{
	int n,i,k,q,b;
	int vc[12];
	while(scanf("%d",&n)!=EOF)
	{
		q=n;
		for(i=0;i<12;i++)
			vc[i]=0;
		i=0;k=0;
		b=0;
		while(n)
		{
			if(n<0)
			{
				n=-n;
				b=1;
			}
			vc[i]=n%2;
			n=n/2;
			i++;
			k++;
		}
		printf("%d-->",q);
		if(b==1)
			printf("-");
				if(q==0)
			printf("%d",q);

	    for(i=11-k;i<11;i++)
		    printf("%d",vc[11-i-1]);
		printf("\n");
	}

}

			
