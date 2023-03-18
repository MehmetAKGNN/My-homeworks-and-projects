#include <iostream>
using namespace std;

int main(){
    int sayi1,sayi2,ebob=1,i=2,ekok=1;
    char girdi;
    cout<<"Lutfen sirasi ile ebob ve ekok'unu bulmak istediginiz sayilari giriniz : \n";
    cin>>sayi1>>sayi2;
    cout<<"Bu iki sayinin EBOB'unumu yoksa EKOK'unumu bulmak istiyorsunuz? (B/K) şeklinde seciminizi yapiniz :";
    cin>>girdi;
    switch(girdi){
        case 'B':
            while(sayi1>1 || sayi2>1){
                if(sayi1%i==0 && sayi2%i==0){
                    sayi1 = sayi1/i;
                    sayi2 = sayi2/i;
                    ebob *= i;
                }
                else{
                    i++;
                    if(sayi1%i==0 && sayi2%i==0){
                        sayi1 = sayi1/i;
                        sayi2 = sayi2/i;
                        ebob *= i;
                    }
                    else{
                        sayi1 = sayi1/i;
                        sayi2 = sayi2/i;
                    }
                }
            }
            cout<<"Girilen iki tane degerin ebob'u : "<<ebob<<"\n";
            break;
        case 'K': 
            while(sayi1>1 || sayi2>1){
                if(sayi1%i==0 || sayi2%i==0){
                    if(sayi1%i==0){
                        sayi1 = sayi1/i;
                    }
                    if(sayi2%i==0){
                        sayi2 = sayi2/i;
                    }
                    ekok *= i;
                }
                else{
                    i++;
                }
            }
            cout<<"Girilen iki tane degerin ekok'u : "<<ekok<<"\n";
            break;
        default:
        cout<<"HATALI SECIM YAPTINIZ LUTFEN TEKRAR DENEYINIZ!! \n";
    }
    return 0;
}