#include<stdio.h>

int main(){
	char ch;
	printf("Lutfen bir harf giriniz...\n");
	scanf("%c",&ch);
	((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))?printf("Harf alfabede..."): printf("Harf alfabede degil...");
	return 0;
	
}
