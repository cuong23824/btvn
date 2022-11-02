#include <stdio.h>
int main(){
	int n, t=0, x=0;
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			t+=ary[i];
			if(x<t){
				x=t;
			}
		}else{
			t=0;
		}
	}
	printf("%d",x);
}
