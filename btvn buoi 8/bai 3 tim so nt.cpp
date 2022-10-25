#include <stdio.h>
int main(){
	int n,i=0, d=0 ;
	scanf("%d",&n);
	while (i<=n){
		if (n%i==0){
			d++;
		}
		i++;
	}
	printf("%d",d);
	if (d==2){
		printf("n la so nt");
	}else{
		printf("n k la so nt");
	}
}
