#include <stdio.h>
int main(void)
{
	int i,j,k,sum=0,n,m,g,b,vb[5000][2],vg[5000][2],flag=0,sum2=0,vc[5000];
	//freopen("D:\\4.txt","r",stdin);
	for(i=0;i<5000;i++)
		vc[i]=0;
	scanf("%d%d%d%d",&n,&m,&b,&g);
	for(i=0;i<b;i++)
		scanf("%d%d",&vb[i][0],&vb[i][1]);
	for(i=0;i<g;i++)
		scanf("%d%d",&vg[i][0],&vg[i][1]);
	for(i=0;i<b;i++)
		for(j=vb[i][0];j<=vb[i][1];j++)
			vc[j]=1;//每有一排被拖地了就数组vc对应的值=1
	for(i=0;i<5000;i++)
		if(vc[i]==1)
			sum++;//男生排数
	flag=n-sum;//男生空白排数
	sum*=m;//男生格子数目
	for(i=0;i<5000;i++)
		vc[i]=0;//格式化
	for(i=0;i<g;i++)
		for(j=vb[i][0];j<=vb[i][1];j++)
			vc[j]=1;//每有一排被拖地了就数组vc对应的值=1
	for(i=0;i<5000;i++)
		if(vc[i]==1)
			sum2++;//女生排数
	sum2*=flag;//女生拖而男生没拖的格子数
	sum+=sum2;//总格子数

	printf("%d",sum);
}

	



	

