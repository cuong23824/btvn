#include <stdio.h>
int main(){
	int n, y, x;
	do{
		printf("vui long nhat so nguyen duong\n");
		scanf("%d",&n);
	}
	while(n<=0);
	while(n!=0){
		x=n%10;
		n=n/10;
		y=x;
	}
	printf("so ngoai cua cua n la %d",y);
}
