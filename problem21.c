#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int sonuc;
	int kuvvet;
	printf("Bir sayi giriniz...\n");
	scanf("%d",&a);
	printf("Sayinin kacinci kuvvetini istiyorsunuz...\n");
	scanf("%d",&kuvvet);
	sonuc = pow(a,kuvvet);
	printf("Sonuc : %d", sonuc);
	return 0;
}
