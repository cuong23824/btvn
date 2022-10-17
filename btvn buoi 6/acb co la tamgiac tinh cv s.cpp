#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, cv;
	float s, p;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b>b)&&(a+c>b)&&(b+c>a)){
		printf("a b c la do dai 3 canh cua 1 tam giac \n");
		cv= a+b+c;
		p= cv/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("cv=%d va s=%f",cv,s);
	}else{
		printf("a b c ko la 3 canh cua 1 tam giac");
	}
}
