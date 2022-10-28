#include <stdio.h>
int main(){
	int n, c=0;
	float t=0;
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for (int i=0; i<n;i++){
		if(i%2==0 && ary[i]%2==1){
			t=t+ary[i];
			c++;
		}
	}
	t=t/c;
	printf("%f",t);
}
