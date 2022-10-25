#include <stdio.h>

// 1. tim so dao nguoc cua 1 so nguyen

 int sdn(int n){
 	y=0;
 	while(x!=0){
 	x=n%10;
 	y=y*10+x
 	n=n/10;
    }
    return y;
 }
 
 
 // 2. tim so lon nhat trong 3 so nguyen
 
 int max(int a, int b, int c){
 	max = a;
 	if(b>max){
 		max=b;
	 }
	 if(c>max){
	 	max=c
	 }
	 return max;
 }
 
 
 // 3. tim so thu n trong day fibonaci
 
 int stn(int n){
 	x0=0;
	x1=1;
	x2=1;
 	for(i=2;i<=n;i++){
 		x0=x1;
		x1=x2;
		x2=x0 + x1; 
	 }
	 return x2;
 }
 
 // 4. tinh tong S=1+2+3+...
 
 int tongs(int n){
 	t=0;
 	for(i=1;i<=n;i++){
 		t=t+i
	 }
	 return t;
 }
 
 
 // 5. tinh tong S= 1+1/2+...+1/n
 
 int tongS(int n){
 	t=0;
 	for(i=1;i<=n;i++){
 		t=t+1/n;
	 }
	 return t;
 }
