#include <stdio.h>
int main(){
	int n, x=0, y;
	scanf("%d",&n);
	while(x<n){
		if(x%2==0 && x%3==0){
			y=x;
		}
		x++;
	}
	printf("%d",y);
}
