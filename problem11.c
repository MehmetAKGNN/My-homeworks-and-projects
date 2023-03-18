#include<stdio.h>
/// 3.soru çözümü:

int main(){
	int A[10],i,j,coun=1;
	printf("Lutfen sirasi ile 10 tane deger giriniz...\n");
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(A[i]==A[j]){
				A[j]=-1;
			}
		}
	}
	for(i=0;i<10;i++){
		if(A[i]!=-1){
			printf("\n%d. Deger : %d",coun,A[i]);
			coun+=1;
		}
	}
	return 0;
}


