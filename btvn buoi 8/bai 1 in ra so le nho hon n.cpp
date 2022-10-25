#include <stdio.h>
int main(){
	int n, x=0, y;
	scanf("%d",&n);
	while(x<n){
		y = x % 2;
		if (y!=0){
			printf("%d \n",x);
		}
		x++;
	}
}
