#include <stdio.h>
int main(){
	int n, t=0;
	do{
		printf("vui long nhap so khac 0 \n");
		scanf("%d",&n);
	}
	while(n==0);
	for (int i=1;i<=n;i++){
		if(n%i==0){
			t=t+i;
			printf("uoc cua n la %d \n",i);
		}
	}
	for (int i=-1;i>=n;i--){
		if(n%i==0){
			t=t+i;
			printf("uoc cua n la %d \n",i);
		}
	}
	printf("tong uoc cua n la %d \n",t);
}
