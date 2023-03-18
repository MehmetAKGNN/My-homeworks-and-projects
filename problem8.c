#include<stdio.h>

int main(){
	int a;
	int b;
	printf("Bir sayi giriniz...\n");
	scanf("%d", &a);
	if(a>=0){
		printf("%d",a);
	}
	else{
		b = -1*a;
		printf("%d", b);
	}
	return 0;
}

