#include <iostream>
using namespace std;

class HesapMakinesi{
    public:
        void GirdiAl(){
            cout<<"Lutfen 1. sayi giriniz :";
            cin>>sayi1;
            cout<<"Lutfen 2. sayi giriniz :";
            cin>>sayi2;
        };

        void Toplama(){
            sonuc = sayi1 + sayi2;
            cout<<"SONUC :"<<" "<<sonuc;
        };

        void Cikarma(){
            if(sayi1 > sayi2){
                sonuc =  sayi1 - sayi2;
            }
            else{
                sonuc = sayi2 - sayi1;
            }
            cout<<"SONUC :"<<" "<<sonuc;
        };

        void Bolme(){
            if(sayi1 > sayi2){
                sonuc = sayi1 / sayi2;
            }
            else{
                sonuc = sayi2 / sayi1;
            }
            cout<<"SONUC :"<<" "<<sonuc;
        };

        void Carpma(){
            sonuc = sayi1 * sayi2;
            cout<<"SONUC :"<<" "<<sonuc;
        }; 

    private:
    float sayi1, sayi2, sonuc;
};

int main(){
    int deger;
    HesapMakinesi ornek;
    ornek.GirdiAl();
    cout<<"1. TOPLAMA"<<"\n";
    cout<<"2. CIKARMA"<<"\n";
    cout<<"3. BOLME"<<"\n";
    cout<<"4. CARPMA"<<"\n"; 
    cout<<"Lutfen bir tane islem seciniz : ";
    cin>>deger;
    switch(deger){
        case 1:{
            ornek.Toplama();
            break;
        }
        case 2:{
            ornek.Cikarma();
            break;
        }
        case 3:{
            ornek.Bolme();
            break;
        }
        case 4:{
            ornek.Carpma();
            break;
        }
        default:{
            cout<<"Yanlis deger girdiniz lutfen tekrar giriniz..."; 
        }
               
    }
    return 0;
}