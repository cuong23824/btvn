#include <stdio.h>
 int main(){
    int n, x, y=0;
    do{
    printf("vui long nhap 1 so khac 0");	
    scanf("%d", &n);
	}
    while (n==0);
    while(n != 0){
        x = n % 10;
        y = y * 10 + x;
        n = n / 10;
    }
    printf("%d", y);
}
