#include <stdio.h>
int main(void)
{
		int x,y;
		int i,j;
		scanf("%d%d",&i,&j);
		x=1;y=1;

		while(x<=i){
			while(y<=j){
				putchar('*');
				y++;
			}
			putchar('\n');
			y=1;
			x++;
		}
		return(0);
}
