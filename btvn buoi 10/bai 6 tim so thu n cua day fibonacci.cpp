#include <stdio.h>
int main(){
	int x=0, y=1, z=1, n;
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
		z=x+y;
		x=y;
		y=z;
	}
	printf("so thu %d cua day la %d",n,z);
}
