#include <stdio.h>
int main(){
	int a, b, x, y;
	scanf("%d%d",&a,&b);
	for (int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			x=i;
		}
	}
	printf("uoc chung lon nhat cua %d va %d la %d \n",a,b,x);
	for (int i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			y=i;
		}
	}
	printf("boi chung nho nhat cua %d va %d la %d",a,b,y);
}
