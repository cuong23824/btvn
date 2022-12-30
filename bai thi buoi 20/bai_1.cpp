#include <stdio.h>
int main(){
	int ary[10];
	for(int i=0; i<10;i++){
		printf("a[%d] :",i);
		scanf("%d",&ary[i]);
	}
	sort(ary(0),ary(9));
	for(int i=9;i>=0;i--){
		printf("%d \n",ary[i]);
	}
}
