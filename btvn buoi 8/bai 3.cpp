#include <stdio.h>
int main(){
	int n, x=1, y=0;
	scanf("%d",&n);
	if(n<2){
		printf("n k la so nguyen to");
	}else{
	if(n==2){
		printf("n la so nguyen to");
	}else{
		while (x<n){
			if(n%x==0){
			y=y++;
			}
			x++;
    }
}
if (y==2){
	printf(" n la so nguyen to");
}else{
	printf("n k la so nt");
}
}
}
