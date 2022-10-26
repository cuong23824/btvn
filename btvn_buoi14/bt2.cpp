#include <stdio.h>
#include <math.h>
// 1. tinh chu vi tam giac

int CV(int a, int b, int c){
	int cv=a+b+c;
	return cv;
}


// 2. tinh dien tich tam  giac

float S(int a, int b, int c){
	float p=(a+b+c)/2.0;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}


// 3. tinh tong cac chu so cua 1 so nguyen n

int tong(int n){
	int y=0;
	while(n!=0){
	int x=n%10;
	    y=y+x;
	    n=n/10;
	}
	return y;
}


// 4. tim uoc chung lon nhat cua 2 so
int ucln(int a, int b){
	for(int i=a;i>1;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}


// 5. tim boi chung nho nhat cua 2 so
int bcnn(int a, int b){
	for(int i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}


// 6.kiem tra n co phai so chinh phuong hay k
bool scp(int a){
	int x=sqrt(a), y=x*x;
	if(y=a){
		return true;
	}
	    return false;
}


// 7. tim so nguyen duong n nho nhat sao cho 1+2+...+n>1000
int min(){
	int y=0,i=0;
	while (i<1000){
		y=y+i;
	if(y>1000){
		return i;
	}
	i++;
}
}

// 8. kiem tra cac chu so nguyen duong n co giam dan tu trai sang phai hay khong


bool chuso(int n){
		int x=n%10;
		 n=n/10;
		while (n!=0){
			int y=n%10;
			if(y<=x){
				return false;
			}else{
				x=y;
				n=n/10;
			}
		}
		return true;
	}
	

