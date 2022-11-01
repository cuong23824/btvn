#include <stdio.h>
#include <string.h>
//void chuyenInHoa(char s[]){
//	for (int i=0;i<strlen(s);i++){
//		if(m[i]>96 && m[i]<123){
//			m[i]=m[i]-32;
//		}
//	}
//}
int main(){
	char m[50];
	scanf("%s",m);
	for (int i=0;i<strlen(m);i++){
		if(m[i]>96 && m[i]<123){
			m[i]=m[i]-32;
		}
	}
	printf("%s",m);
}
