#include <iostream>
using namespace std;


int main(){
    float derssayisi,katilim,yuzde;
    char giris;
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
        if(yuzde>=75){
            cout<<"Sinava giris izniniz bulunmaktadir.";
        }
        else if(yuzde<75){
            while(true){
                cout<<"Herhangi bir tibbi nedeniniz bulunmakta mi? (E/H)";
                cin>>giris;
                if(giris=='e' || giris=='E'){
                    cout<<"Sinava girebilirsiniz.";
                    break;
                }
                else if(giris=='h' || giris=='H'){
                    cout<<"Sinava giris izniniz bulunmamaktadir.";
                    break;
                }
                else{
                    cout<<"Hatali giris yaptiniz lutfen bir daha giriniz...\n";
                }
            }
        }
    }
    return 0;
}