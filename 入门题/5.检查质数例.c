#include <stdio.h>
int main(void)
{
	int i,no;
	unsigned long counter=0;
	for(no=0;no<=10000;no++){
		for (i=2;i<no;i++){
			counter++;
			if (no%i==0)
				break;
		}
		if(no==i)
			printf("%d\n",no);
	}

	printf("ÔËËã´ÎÊý£º%lu\n",counter);
	return(0);
}