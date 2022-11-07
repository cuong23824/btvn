#include <stdio.h>
int ar(int a[]){
	int x=a[0];
	for(int i=1; i<8;i++){
		if(a[i]<x){
			x=a[i];
		}
	}
	return x;
}
int main(){
	int ary[8];
	ary[0]=1; ary[1]=2; ary[2]=4;ary[3]=5; ary[4]=10; ary[5]=100; ary[6]=2; ary[7]=-22;
	int x=ar(ary);
	printf("%d",x);
}
