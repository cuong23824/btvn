#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	scanf("%s",s);
	int a=0, b=0;
	for(int i=0;i<strlen(s);i++){
	if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'  ){
			a++;
		}else{
			b++;
		}
	}
	printf("chuoi %s co so nguyen am la %d va so phu am la %d",s,a,b);
}
