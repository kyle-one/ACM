#include <stdio.h>
int main(void)
{
	int vc[3][3];//0W,1Z,2L
	int W2,Z2,L2,i,a;
	vc[0][0]=8;
	vc[2][0]=9;
	vc[1][0]=7;
	for(L2=4;L2<6;L2++)
		for(W2=4;W2<7;W2++)
			for(Z2=4;Z2<7&&W2!=L2;Z2++)
			{
				if(Z2!=L2&&Z2!=W2&&\
					15-W2-vc[0][0]!=15-Z2-vc[1][0]&&\
					15-W2-vc[0][0]!=15-L2-vc[2][0]&&\
					15-Z2-vc[1][0]!=15-L2-vc[2][0])
				{
					vc[1][1]=Z2;vc[0][1]=W2;vc[2][1]=L2;
					vc[2][2]=15-vc[2][0]-L2;
					vc[0][2]=15-vc[0][0]-W2;
					vc[1][2]=15-vc[1][0]-Z2;
				}
			}
	for(i=0;i<3;i++)
		if(vc[i][2]==1)
			a=i;
	switch(a)
	{
	case 0:printf("W");break;
	case 1:printf("Z");break;
	case 2:printf("L");break;
	}
}

		




