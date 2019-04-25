#include <stdio.h>
void selectSort(int A[],int len)

{

    int i,j,k;

    for(i=0;i<len;i++){

       k=i;

       for(j=i+1;j<len;j++){

           if(A[j]<A[k])

               k=j;

       }

       if(i!=k){

           A[i]=A[i]+A[k];

           A[k]=A[i]-A[k];

           A[i]=A[i]-A[k];

       }

    }

}
int main(void)
{
	int vc[10];
	int n=10;
	int i;
	for(i=0;i<10;i++)
		scanf("%d ",&vc[i]);
	selectSort(vc,n);
	for(i=9;i>=0;i--){
	printf("%d ",vc[i]);
	}
}
