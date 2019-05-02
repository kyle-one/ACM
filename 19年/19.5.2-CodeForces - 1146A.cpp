#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(void)
{
	char vc[100];
	int suma=0,len,sumx;
	scanf("%s",vc);
	len=strlen(vc);
	for(int i=0;i<strlen(vc);i++){
		if(vc[i]=='a')
			suma++;}
	sumx=len-suma;
	while(1){
		if(suma>sumx) break;
		sumx--;len--;}
	printf("%d",len);
}