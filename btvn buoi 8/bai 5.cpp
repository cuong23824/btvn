#include <stdio.h>
int main(){
	int x=1, n, y, t=0;
	scanf("%d",&n);
for (x=1;x<n;x++){
	if(n%x==0){
	t+=x;
    }
}
	if(t==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d k la so hoan hao",n);
	}
}
