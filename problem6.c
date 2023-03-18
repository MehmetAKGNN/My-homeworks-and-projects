#include<stdio.h>
/// 2.soru çözümü:
int main(){
	int A[]={51,12,18,33,19,20,37};
	int i,temp1=A[0],temp2=A[0];
	for(i=1;i<7;i++){
		if(temp1<A[i]){
			temp1 = A[i];
		}
		else if(temp2>A[i]){
			temp2 = A[i];
		}
	}
	printf("En buyuk deger = %d\n",temp1);
	printf("En kucuk deger = %d",temp2);
	return 0;
}

