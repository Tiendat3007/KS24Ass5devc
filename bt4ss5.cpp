#include<stdio.h>
int main(){
	int X,tich;
	printf("hay nhap bang cuu chuong:");
	scanf("%d",&X);
	printf("bang cuu chuong: %d ",X);
	for(int i = 1;i<=10;i++){
		tich = X*i;
		printf("\n%d * %d = %d",X,i,tich);
	}
	
	
	
return 0;	
}
