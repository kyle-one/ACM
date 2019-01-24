#include <stdio.h>

int trans(char b)
{
	int abc;
	if(b=='s')
		abc=1;
	if(b=='h')
		abc=2;
	if(b=='c')
		abc=3;
	if(b=='d')
		abc=4;
	return (abc);
}

int main(void)
{
	int i,j,k,vc[101][2],cong[2],n,flag=0,tmp,bb[2],sum=0,vb[101][2];
	char a[100],cong1;
	scanf("%c%d%d",&cong1,&cong[1],&n);
	cong[0]=trans(cong1);
	for(i=0;i<n;i++)
		scanf("\n%c %d",&a[i],&vc[i][1]);
	vc[n][0]=999;vc[n][1]=999;
	for(i=0;i<n;i++)
	{
		vc[i][0]=trans(a[i]);
		if(vc[i][1]==1)
			vc[i][1]=14;//把1改为14
	}
	//for(i=0;i<n;i++)
		//printf("%d %d\n",vc[i][0],vc[i][1]);
	for(i=n-1;i>0;i--)//花色排序,大在前
	{
		flag=0;
		for(j=0;j<i;j++)
			if(vc[j][0]<vc[j+1][0])
			{
				tmp=vc[j][0];
				vc[j][0]=vc[j+1][0];
				vc[j+1][0]=tmp;
				tmp=vc[j][1];
				vc[j][1]=vc[j+1][1];
				vc[j+1][1]=tmp;
				flag=1;
			}
		if(flag==0)
			break;
	}
	for(i=n-1;i>0;i--)//数值排序，小在前
	{
		flag=0;
		for(j=0;j<i;j++)
			if(vc[j][1]>vc[j+1][1])
			{
				tmp=vc[j][0];
				vc[j][0]=vc[j+1][0];
				vc[j+1][0]=tmp;
				tmp=vc[j][1];
				vc[j][1]=vc[j+1][1];
				vc[j+1][1]=tmp;
				flag=1;
			}
		if(flag==0)
			break;
	}
	j=0;
	for(i=0;i<n;i++)//1 1 1 2 3 4 5 5 5 6 7 8 8 8 9//排除相同
	{
		if(vc[i][0]==vc[i+1][0]&&vc[i][1]==vc[i+1][1])
			;
		else
		{
			vb[j][0]=vc[i][0];
			vb[j++][1]=vc[i][1];
		}
	}
	//printf("\n");
	//for(i=0;i<j;i++)
		//printf("%d %d\n",vb[i][0],vb[i][1]);



	//for(i=0;i<n;i++)
		//printf("%d %d\n",vc[i][0],vc[i][1]);
	
	flag=0;
	for(i=0;i<j;i++)
	{
		if(vb[i][0]==cong[0])//花色相同
		{
			if(vb[i][1]>cong[1])
			{
				flag=1;
				bb[0]=vb[i][0];
				bb[1]=vb[i][1];
				break;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		if(vb[i][0]==cong[0])
			if(vb[i][1]>cong[1])
			{
				sum++;
				//printf("\n%d %d\n\n",vb[i][0],vb[i][1]);
			}
	}

	if(flag==0)
		printf("0");
	else
	{
		printf("%d\n",sum);
		printf("%c ",cong1);
		switch(bb[1])
		{
		case 14:printf("Ace"); break;
		case 2:printf("2"); break;
		case 3:printf("3"); break;
		case 4:printf("4"); break;
		case 5:printf("5"); break;
		case 6:printf("6"); break;
		case 7:printf("7"); break;
		case 8:printf("8"); break;
		case 9:printf("9"); break;
		case 10:printf("10"); break;
		case 11:printf("Jack"); break;
		case 12:printf("Queen"); break;
		case 13:printf("King"); break;
		}

	}
	
}