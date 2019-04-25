#include <stdio.h>
int main(void)
{
	int i,j,k,vc[4][2],x,y,flag=0,a[2][2],b[3][2],tmp,flag1=0;
	for(i=0;i<3;i++)//0是x，1是y
		scanf("%d%d",&vc[i][0],&vc[i][1]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			if(i!=j&&vc[i][0]==vc[j][0])
			{
				for(k=0;k<3;k++)
					if(vc[k][0]!=vc[i][0])
					{
						y=vc[k][0];
						flag=1;
					}
			}
			if(i!=j&&vc[i][1]==vc[j][1])
			{
				for(k=0;k<3;k++)
					if(vc[k][1]!=vc[i][1])
						x=vc[k][1];
			}
		}
	//坐标法判断垂直！！！
		k=0;//4 4,7 5,3 7
	if(flag==0)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i!=j)
				{
					a[k][0]=vc[j][0];
					a[k++][1]=vc[j][1];
				}
			}
			k=0;
			//printf("%d %d %d %d \n",a[0][0],a[0][1],a[1][0],a[1][1]);
			//printf("%f %f ",(double)(a[0][1]-vc[i][1])/(double)(a[0][0]-vc[i][0]),1/(double)(a[1][1]-vc[i][1])/(double)(a[1][0]-vc[i][0]));
			if((double)(a[0][1]-vc[i][1])/(double)(a[0][0]-vc[i][0])==-1/((double)(a[1][1]-vc[i][1])/(double)(a[1][0]-vc[i][0])))

					//判断垂直
				{
					b[0][0]=vc[i][0];
					b[0][1]=vc[i][1];
					b[1][0]=a[0][0];
					b[1][1]=a[0][1];
					b[2][0]=a[1][0];
					b[2][1]=a[1][1];
					//printf("%d %d %d %d ",b[1][0],b[1][1],b[2][0],b[2][1]);
					//printf("%d %d ",b[0][0],b[0][1]);
					//printf("%d %d %d %d",a[0][0],a[0][1],a[1][0],a[1][1]);
				}//0储存顶点坐标
		}
		/*if(b[1][0]>b[2][0])//1为左边的
		{
			tmp=b[1][0];
			b[1][0]=b[2][0];
			b[2][0]=tmp;
			tmp=b[1][1];
			b[1][1]=b[2][1];
			b[2][1]=tmp;
		}*/
		//printf("%d %d %d %d ",b[1][0],b[1][1],b[2][0],b[2][1]);
		//for(i=0;i<3;i++)
			//printf("%d %d\n",b[i][0],b[i][1]);
		for(i=1;i<20;i++)//i-y,j-x
		{
			for(j=1;j<20;j++)
			{
				if(((double)(i-b[1][1])/(double)(j-b[1][0]))==-1/((double)(b[0][1]-b[1][1])/(double)(b[0][0]-b[1][0])))
					if(((double)(i-b[2][1])/(double)(j-b[2][0]))==-1/(double)(b[0][1]-b[2][1])/(double)(b[0][0]-b[2][0]))
					{
						printf("%d %d",i,j);
						break;
					}
			}
		}
	}
}