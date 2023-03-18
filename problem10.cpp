#include <iostream>
using namespace std;

int main(){
    int yas1,yas2,yas3;
    cout<<"Sirasi ile yas giriniz :\n";
    cin>>yas1>>yas2>>yas3;
    if(yas1>yas2 && yas1>yas3 && yas2>yas3){
        cout<<"En yasli : "<<yas1<<" yasindadir.\n";
        cout<<"En genc : "<<yas3<<" yasindadir.";
    }
    else if(yas2>yas3 && yas2>yas1 && yas3>yas1){
        cout<<"En yasli : "<<yas2<<" yasindadir.\n";
        cout<<"En genc : "<<yas1<<" yasindadir.";
    }
    else{
        cout<<"En yasli : "<<yas3<<" yasindadir.\n";
        if(yas1>yas2){
            cout<<"En genc : "<<yas2<<" yasindadir.";    
        }
        else{
            cout<<"En genc : "<<yas1<<" yasindadir.";
        }
    }

    return 0;
}