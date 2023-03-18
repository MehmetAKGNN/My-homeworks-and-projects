#include <iostream>
using namespace std;

int main(){
    int i,kucuk=0,buyuk=0,sesli=0,rakam=0;
    char dizi[100] = {'\0'};
    cout<<"Bir cumle giriniz : ";
    gets(dizi);
    cout<<"\n";

    while(dizi[i] != '\0'){
        if(dizi[i]>= 'a' && dizi[i]<='z'){
            kucuk += 1;
        }
        if(dizi[i]>= 'A' && dizi[i]<='Z'){
            buyuk += 1;
        }
        if(dizi[i]=='a' || dizi[i]=='e' || dizi[i]=='i' || dizi[i]=='o'|| dizi[i]=='u'){
            sesli += 1;
        }
        if(dizi[i]>='0' && dizi[i]<='9'){
            rakam += 1;
        }
        i++;
    }

    cout<<"Girilen cumledeki toplam buyuk harf sayisi : "<<buyuk<<"\n";
    cout<<"Girilen cumledeki toplam kucuk harf sayisi : "<<kucuk<<"\n";
    cout<<"Girilen cumledeki toplam sesli harf sayisi : "<<sesli<<"\n";
    cout<<"Girilen cumledeki toplam rakam sayisi : "<<rakam<<"\n";
    
    return 0;
}