#include <iostream>
using namespace std;

int main(){
    float derssayisi,katilim,yuzde;
    cout<<"Lutfen toplam ders sayisini giriniz : ";
    cin>>derssayisi;
    cout<<"Lutfen katildiginiz ders sayisini giriniz : ";
    cin>>katilim;
    if(katilim>derssayisi){
        cout<<"KATILDIGINIZ DERS SAYISI TOPLAM DERS SAYISINDAN FAZLA OLAMAZ !!!";
    }
    else{
        yuzde = (katilim/derssayisi)*100;
        cout<<"Katilim yuzdeniz : "<<yuzde<<"\n";
        if(yuzde<75){
            cout<<"Sinava giris izniniz bulunmamaktadir.";
        }
        else{
            cout<<"Sinava giris izniniz vardir.";
        }
    }
    return 0;
}