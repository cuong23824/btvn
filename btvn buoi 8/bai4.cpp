#include <stdio.h>
 
int main(){
    int n, x;
    scanf("%d", &n);
    int y = 0;
    while(n > 0){
        x = n % 10;
        y = y * 10 + x;
        n = n / 10;
    }
    printf("%d", y);
}
