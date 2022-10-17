#include <stdio.h>
int main(){
	int a, t;
	scanf("%d",&a);
	if (a<=10000000){
		t=a*5/100;
	}else{
		if ((a>100000000)&&(a<=300000000)){
			t=a*10/100;
		}else{
			t=a*20/100;
		}
	}
	printf("tien hoa hong la %d",t);
}
