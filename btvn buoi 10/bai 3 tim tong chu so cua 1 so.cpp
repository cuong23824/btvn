#include <stdio.h>
 int main(){
    int n, x, t=0;
    do{
    printf("vui long nhap 1 so khac 0 \n");	
    scanf("%d", &n);
	}
    while (n==0);
    while(n != 0){
    	x=n%10;
    	t=t+x;
    	n=n/10;
    }
    printf("tong cac chu so cua n la %d",t);
}
