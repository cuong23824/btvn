#include <stdio.h>
int main(){
	int n, x, c=0;
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	scanf("%d",&x);
for(int i=0;i<n;i++){
		if(ary[i]==x){
			c++;
		}
	}
	if(c==0){
		printf("%d k co trong mang",x);
	}else{
		printf("%d co trong mang",x);
	}
}
