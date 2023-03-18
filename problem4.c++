#include <iostream>
using namespace std;

class Degistirme{
    public:
        void GirdiAl(){
            cout<<"1. sayi :";
            cin>>a;               
            cout<<"2. sayi :";
            cin>>b;             
        };
        void Takas(){
            a = a * b;
            b = a / b;
            a = a / b;
        };
        void Goster(){
            cout<<"Degistirildikten sonra yeni 1. sayi : "<<a<<"\n";
            cout<<"Degistirildikten sonra yeni 2. sayi : "<<b;
        };


    private:
        int a, b;
};

int main(){
    Degistirme ornek;
    ornek.GirdiAl();
    ornek.Takas();
    ornek.Goster();
    return 0;
}