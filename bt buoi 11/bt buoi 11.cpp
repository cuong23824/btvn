#include <stdio.h>
int main(){
	printf("1. \n");
	for (int i=0;i<3;i++){
		for (int j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("2. \n");
		for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			printf("*");
			}
			if(i%2==0){
				printf("*");
			}
			printf("\n");
		}
		
	printf("3. \n");
			for (int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("4. \n");
	for (int i=0;i<5;i++){
		for(int h=0;h<=i;h++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf(" ");
	}
	printf("\n");
}
}
