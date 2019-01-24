#include <stdio.h>
int main(void)
{
	int i,j,k,n,vc[1000][3],vb[4]={0,0,0,0},dang,wei;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&vc[i][0],&vc[i][1],&vc[i][2]);
	for(i=0;i<n;i++)
	{
		if(vc[i][2]==1)
		{
			vb[vc[i][0]-1]+=4*vc[i][1];
			vb[0]-=vc[i][1];
			vb[1]-=vc[i][1];
			vb[2]-=vc[i][1];
			vb[3]-=vc[i][1];
		}
		else
		{
			vb[vc[i][0]-1]-=4*vc[i][1];
			vb[0]+=vc[i][1];
			vb[1]+=vc[i][1];
			vb[2]+=vc[i][1];
			vb[3]+=vc[i][1];
		}
	}
	printf("%d %d %d %d",vb[0],vb[1],vb[2],vb[3]);
}


