#include<stdio.h>

int main(){
	char ch;
	printf("Lutfen bir harf giriniz...\n");
	scanf("%c",&ch);
	(ch>='A' && ch<='Z')?printf("Harf buyuktur..."): printf("Harf kucuktur...");
	return 0;
	
}
