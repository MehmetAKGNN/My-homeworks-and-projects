#include <iostream>
using namespace std;

int main(){
    int sayi,basamak,ctop=0,ttop=0;
    cout<<"Lutfen bir sayi girisi yapiniz : ";
    cin>>sayi;     
    int i;
    for(i=0;sayi>0;i++){
        basamak = sayi%10;
        if(basamak%2==0){
            ctop += basamak;
        }
        else{
            ttop += basamak;
        }
        sayi = sayi/10;
    }
    cout<<"Girilen sayinin cift basamaklarinin toplami : "<<ctop<<"\n";
    cout<<"Girilen sayinin tek basamaklarinin toplami : "<<ttop<<"\n";
}