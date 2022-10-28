#include <stdio.h>
int main(){
	int n, t=0;
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(ary[i]%2==1){
			t=ary[i];
		}
	}
	if(t!=0){
	printf("so le cuoi cung cua mang la %d",t);
    }else{
    	printf(" mang k co so le");
	}
}
