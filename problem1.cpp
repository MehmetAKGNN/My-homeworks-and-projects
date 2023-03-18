#include <iostream>
using namespace std;

class Sirket{
    public:
        string ad;
        string soyad;
        string bolum;
        int maas;
        Sirket *next;
}*start;

void Personel_Ekle(string x, string y,string z,int v){
    if(start == NULL){
        start = new Sirket();
        start->ad=x;
        start->soyad=y;
        start->bolum=z;
        start->maas=v;
        start->next=NULL;
    }
    else{
        Sirket *temp = start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new Sirket();
        temp->next->ad=x;
        temp->next->soyad=y;
        temp->next->bolum=z;
        temp->next->maas=v;
        temp->next->next=NULL;
    }
}

void Goster(Sirket *x){
    int count=0;
    if(x==NULL){
        cout<<"Henuz Herhangi Bir Veri Girisi Yapilmadi. Lutfen Veri Girisi Yapiniz!!!"<<endl;
    }
    else{
        cout<<"\n"<<"PERSONEL TABLOSU : ";
        while (x!=NULL){
            cout<<"\n";
            cout<<count+1<<". Personel Ad :"<<x->ad<<endl;
            cout<<count+1<<". Personel Soyad :"<<x->soyad<<endl;
            cout<<count+1<<". Personel Bolum :"<<x->bolum<<endl;
            cout<<count+1<<". Personel Maas :"<<x->maas<<endl;
            count += 1;
            x=x->next;
    }
    }    
}

void Toplam_maas(Sirket *x){
    int total=0;
    if(x==NULL){
        cout<<"Henuz Herhangi Bir Veri Girisi Yapilmadi. Lutfen Veri Girisi Yapiniz!!!"<<endl;
    }
    else{
        while (x!=NULL){
            total += x->maas;
            x=x->next;
    }
    cout<<"Toplam Maas : "<<total<<endl;
    }
    
}

void Toplam_calisan(Sirket *x){
    int count1=0;
    if(x==NULL){
        cout<<"Henuz Herhangi Bir Veri Girisi Yapilmadi. Lutfen Veri Girisi Yapiniz!!!"<<endl;
    }
    else{
        while (x!=NULL){
            count1 += 1;
            x=x->next;
    }
    cout<<"Toplam Calisan Sayisi : "<<count1<<endl;
    }
    
}

void Az_Cok(Sirket *x){
    if(x!=NULL){
    int enbuyuk = x->maas , enkucuk = x->maas ;
    while (x!=NULL){
        if(enbuyuk <= x->maas){
            enbuyuk = x->maas;
            x=x->next;
        }
        else{
            x=x->next;
        }
    }
    x = start;
    while (x!=NULL){
        if(enkucuk >= x->maas){
            enkucuk = x->maas;
            x = x->next;
        }
        else{
            x=x->next;
        }
    }
    cout<<"En buyuk maas= "<<enbuyuk<<endl;
    cout<<"En kucuk maas= "<<enkucuk<<endl;
    }  
}

void Personel_Sil(string x,string y){
    Sirket *temp=start;
    Sirket *prev=NULL;
        while(temp!=NULL && temp->ad != x && temp->soyad != x){
        prev=temp;         
        temp=temp->next;   
    }
    if(temp){
        if(prev){
          prev->next=temp->next;
          delete temp;
          cout<<"Calisan Basarili Bir Sekilde Isten Cikartilmistir!!"<<endl;
        }
        else{
           start=temp->next;
           delete temp; 
           cout<<"Calisan Basarili Bir Sekilde Isten Cikartilmistir!!"<<endl;    
        }
    }
    else{
        cout<<"Girilen Bilgilere Uygun Calisan Bulunamadi!!"<<endl;
        }
    
}

int main(){
    int girdi,sayi,maasi;
    string adi,soyadi,bolumu,isim,soyisim;
    while (1)
    {
        cout<<"1.Goster 2.Ekleme 3.Toplam Maas Raporu 4.Toplam Calisan Sayisi 5.En Az Ve En Cok Maas Raporu 6.Personel Isten Cikar 7.Cikis"<<endl;
        cin>>girdi;
        cout<<"\n";
        switch (girdi)
        {
        case (1):
            Goster(start);
            cout<<"\n";
            break;

        case (2):
            cout<<"Kac tane personel girisi yapmak istiyorsunuz? : ";
            cin>>sayi;
            for(int i=0;i<sayi;i++){
                cout<<i+1<<". Personel Adi : ";
                cin>>adi;
                cout<<i+1<<". Personel Soyadi : ";
                cin>>soyadi;
                cout<<i+1<<". Personel Bolumu : ";
                cin>>bolumu;
                cout<<i+1<<". Personel Maasi : ";
                cin>>maasi;
                Personel_Ekle(adi,soyadi,bolumu,maasi);
            }
            break;

        case (3):
            Toplam_maas(start);
            break;


        case (4):
            Toplam_calisan(start);
            break;

        case (5):
            Az_Cok(start);
            break;

        case (6):
            cout<<"Isten cikarmak istediginiz personel ismini giriniz :";
            cin>>isim;
            cout<<"Isten cikarmak istediginiz personel soyismini giriniz :";
            cin>>soyisim;
            Personel_Sil(isim,soyisim);
            break;
        
        case (7):
            exit(1);
            break;

        default:
            cout<<"Hatali giris yaptiniz. Tekrar Deneyiniz!!"<<endl;
            break;
        }
    }
    return 0;
}