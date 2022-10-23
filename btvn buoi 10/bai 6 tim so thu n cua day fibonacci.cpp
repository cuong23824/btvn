#include <stdio.h>
int main(){
	int x=1, y=1, z, n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		z=x+y;
		x=y;
		y=z;
	}
	printf("so thu %d cua day la %d",n,z);
}
