#include<stdio.h>
/// 1.soru çözümü:
int main(){
	int A[]={2, 12, 13, 4, 5};
	int B[]={12, 2, 3, 41, 15};
	int C[5],i,toplam=0;
	for(i=0;i<5;i++){
		toplam = (A[i]+B[i]);
		C[i] = toplam;
		printf("C[%d] : %d\n",i,toplam);
	}
	return 0;
}
