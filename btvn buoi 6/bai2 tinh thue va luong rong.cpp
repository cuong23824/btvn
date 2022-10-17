#include <stdio.h>
int main(){
	int a, t, l;
	scanf("%d",&a);
	if(a>15000000){
		t=a*30/100;
	}else{
		if((a<=15000000)&&(a>=7000000)){
			t=a*20/100;
		}else{
			t=a*10/100;
		}
	}
	l=a-t;
	printf("thue la %d va luong rong la %d",t,l);
}
