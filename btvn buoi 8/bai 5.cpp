#include <stdio.h>
int main(){
	int x=1, n, y, t=0;
	scanf("%d",&n);
	while (x<n){
		y=n%x;
		if(y==0){
		 t = t + x;
		}
		x++;
	}
	if(t==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d k la so hoan hao",n);
	}
}
