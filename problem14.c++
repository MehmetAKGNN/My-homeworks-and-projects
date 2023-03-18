#include <iostream>
using namespace std;

class Zaman{
    public:
        void GirdiAl(){
            cout<<"Saat :";
            cin>>saat;
            cout<<"Dakika :";
            cin>>dakika;
            cout<<"Saniye :";
            cin>>saniye;
        };
        void Goster(){
            if(saniye>=60){
                dakika += saniye / 60;
                saniye = saniye % 60;
            }
            if(dakika >= 60){
                saat += dakika / 60;
                dakika = dakika % 60;
            }
            cout<<"SONUC :"<<" "<<saat<<":"<<dakika<<":"<<saniye;
        };

    private:
        int saat, dakika, saniye;
};
int main(){
    Zaman ornek;
    ornek.GirdiAl();
    ornek.Goster();
    return 0;
}