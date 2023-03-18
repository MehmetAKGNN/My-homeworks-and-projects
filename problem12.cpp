#include <iostream>
using namespace std;

int main(){
    int i,takas,boyut;

    cout<<"Lutfen girilecek dizinin boyutunu giriniz : "<<"\n";
    cin>>boyut;

    int dizi[boyut];

    for(i=0;i<boyut;i++){
        cout<<"Dizinin "<<i+1<<". elemanini giriniz : ";
        cin>>dizi[i];
    }
    

    takas = dizi[boyut-1];
    for(i=boyut;i>=0;i--){
        dizi[i] = dizi[i-1];
    }
    dizi[0] = takas;
    

    cout<<"\n";
    cout<<"Dizinin bir adim saga kaydirilmis hali : "<<"\n";
    for(i=0;i<boyut;i++){
        cout<<dizi[i]<<" ";
    }

    return 0;
}