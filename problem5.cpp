#include <iostream>
using namespace std;

int main(){
    int yil,maas;
    cout<<"Lutfen toplam hizmet yilinizi giriniz :";
    cin>>yil;
    cout<<"Lutfen maasinizi giriniz :";
    cin>>maas;
    if(yil>5){
        maas = maas*0.05;
        cout<<"Net ikramiye miktari : "<<maas;
    }
    else{
        cout<<"Net ikramiye miktari : 0";
    }
    return 0;
}