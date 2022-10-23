#include <stdio.h>
int main(){
	int n, x, y=0;
	do{
		printf("vui long nhap so nguyen duong \n");
		scanf("%d",&n);
	}
	while(n<=0);
	while(n!=0){
		x=n%10;
		n=n/10;
		if(y<x){
			y=x;
		}
	}
	printf("chu so lon nhat cua so n la %d",y);
}
