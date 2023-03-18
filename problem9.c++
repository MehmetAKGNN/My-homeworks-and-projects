#include <iostream>
using namespace std;

class Ogrenci{
    public:
        void GirdiAl(){
            cout<<"Lutfen toplam soru sayisini giriniz :";
            cin>>total;
            cout<<"Lutfen dogru soru sayisini giriniz :";
            cin>>dogru;
        };
        void Hesapla(){
            float tane;
            tane =  100 / total;
            notu = tane * dogru;
        };
        void Goster(){
            cout<<"Ogrencinin notu : "<<notu;
        };

    private:
        float dogru, total;
        float notu;
};
int main(){
    Ogrenci ornek;
    ornek.GirdiAl();
    ornek.Hesapla();
    ornek.Goster();
    return 0;
}