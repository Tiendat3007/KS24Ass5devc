#include<stdio.h>
int main(){
	int N,sum;
	printf("hay nhap so nguyen duong N(1-->10):");
	scanf("%d",&N);
	for(int i = 0;i<=N;i++){
		sum = sum+i;
	}
	printf("tong cac so tu 1 den %d la: %d",N,sum);
	
	
	return 0;
   	
}
