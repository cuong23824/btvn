#include <stdio.h>
int main(){
	int n, t=0, c=0;
	scanf("%d",&n);
	int mangn[n];
	for(int i=0;i<n;i++){
		scanf("%d",&mangn[i]);
	}
	for(int i=0;i<n;i++){
		if(mangn[i]%2==1){
			t=t + mangn[i];
			c++;
		}
	}
	t=t/c;
	printf("tbc so le la %d",t);
}
