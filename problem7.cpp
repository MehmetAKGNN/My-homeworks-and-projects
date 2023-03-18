#include <iostream>
using namespace std;

int main(){
    int i,pivot,swap;
    int dizi[10];
    bool takas=true;

    cout<<"Lutfen 10 tane sayi giriniz : "<<"\n";

    for(i=0;i<10;i++){
        cout<<"Dizinin "<<i+1<<". elemanini giriniz : ";
        cin>>dizi[i];
    }

    for(i=0;i<10;i++){
        for(pivot=0;pivot<10;pivot++){
            if(dizi[pivot] > dizi[pivot+1]){
                swap = dizi[pivot];
                dizi[pivot] = dizi[pivot+1];
                dizi[pivot+1] = swap;
            }
        }
    }

    cout<<"\n";
    cout<<"Girilen dizinin kucukten buyuge dogru sirlanmis hali : "<<"\n";
    for(i=0;i<10;i++){
        cout<<dizi[i]<<" ";
    }

    return 0;
}