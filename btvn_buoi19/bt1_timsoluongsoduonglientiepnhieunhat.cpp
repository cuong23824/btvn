#include <stdio.h>
int main(){
	int n, x, c=0;
	scanf("%d",&n);
	int mangn[n];
	for(int i=0;i<n;i++){
		scanf("%d",&mangn[i]);
	}
	for(int i=0;i<n;i++){
		if(mangn[i]>0){
			x++;
			if(c<x){
				c=x;
			}
		}else{
			x=0;
		}
	}
	printf("%d",c);
}
