#include<stdio.h>
/// 4.soru çözümü:
int main(){
	int n,i,toplam=0,ortalama;
	printf("Lutfen sinifin kac kisilik oldugunu giriniz...\n");
	scanf("%d",&n);
	int A[n];
	printf("Lutfen sirasi ile ogrenci notlarini giriniz...\n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
		toplam += A[i];
		ortalama = toplam/n;
	}
	printf("\nSinifin Not Ortalamasi : %d",ortalama);
	for(i=0;i<n;i++){
		if(A[i]<ortalama){
			printf("\n%d. Ogrencinin notu : %d ,  DURUMU : KALDI",(i+1),A[i]);
		}
		else if(A[i]>=ortalama){
			printf("\n%d. Ogrencinin notu : %d ,  DURUMU : GECTI",(i+1),A[i]);
		}
	}
	return 0;
}
