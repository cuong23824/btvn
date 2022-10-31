#include <stdio.h>
int main(){
	int n, x;
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	scanf("%d",&x);
bool c=true;
for(int i=0;i<n;i++){
		if(ary[i]==x){
			c=false;
			break;
		}
	}
	if(c==true){
		printf("%d k co trong mang",x);
	}else{
		printf("%d co trong mang",x);
	}
}
