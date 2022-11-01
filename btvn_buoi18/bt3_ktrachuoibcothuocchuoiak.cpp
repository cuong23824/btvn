#include <stdio.h>
#include <string.h>
int main(){
	int x=0;
	char a[50], b[50];
	scanf("%s%s",a,b);
	if(strlen(a)<strlen(b)){
		printf("chuoi %s k co trong chuoi %s",b,a);
	}else{
	for(int i=0;i<=strlen(a)-strlen(b);i++){
		int j;
		for (j = 0; j < strlen(b); j++){
            if (a[i + j] != b[j]){
                break;
            }
        if (j == strlen(b)-1){
        	x=1;
		    }
        }
    }
    if(x==1){
	printf("chuoi %s co trong chuoi %s",b,a);
    }else{
	printf("chuoi %s k co trong chuoi %s",b,a);
    }
  }
}
