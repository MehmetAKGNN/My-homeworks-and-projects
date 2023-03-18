#include<stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float delta;
	float x1;
	float x2;
	printf("Sirasiyla denklemin a,b,c degerlerini giriniz...\n");
	scanf("%d %d %d", &a,&b,&c);
	delta = (b*b)-(4*a*c);
	x1 = (-1*b) + (sqrt(delta)) / (2*a);
	x2 = (-1*b) - (sqrt(delta)) / (2*a);
	printf("x1 : %f\n", x1);
	printf("x2 : %f", x2);
	
	
}
