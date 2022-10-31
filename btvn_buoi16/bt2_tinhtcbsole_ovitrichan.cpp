#include <stdio.h>
int main(){
	int n, c=0, t=0;
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
	float tbc= (float)t/c;
	printf("%f",tbc);
}
