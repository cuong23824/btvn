#include <stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d%d%d",&a,&b,&c);
	d=(a+b*2+c*3)/6;
	if(d>=9){
		printf("hang A");
	}else{
		if(d<9 && d>=7){
			printf("hang B");
		}else{
			if (d<7 && d>=5){
				printf("hang C");
			}else{
				printf("hang F");
			}
		}
	}
}
