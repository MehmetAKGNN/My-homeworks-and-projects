#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=6/2;i++){                  
        for(k=1; 6/2-i+1>=k; k++)
            cout<<" ";
                for(j=1; j<2*i; j++)
                cout<<"*";
                cout<<"\n";                        
    }                  
    if(2*i-1>=6){
        for(i=6/2-1; i>=1; i--){
            for(k=1; 6/2-i+1>=k; k++)
                cout<<" ";
                for(j=1; j<2*i; j++)
                    cout<<"*";
                    cout<<"\n";
        }
    }
    return(0);
}