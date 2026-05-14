#include <iostream>
using namespace std;

int main() {
    int bilangan[6];
    int frekuensi[6]={0};

cout<<"masukan angka : "<<endl;
for (int i = 0; i < 6; i++){
    cin>>bilangan[i];
}



for (int i=0;i<6;i++){
    for(int j=0;j<i;j++){
        if ( bilangan[i]==bilangan[j]){
            frekuensi[j]++;
            break;
        }
        
    }
    frekuensi[i]++;
}


cout<<"fekuensi masing masing angka : ";
for(int i = 0;i<6;i++){
        if(frekuensi[i] != 0){
            cout<<"angka "<<bilangan[i]<< " : "<<frekuensi<<"kali"<<endl;
        }
    
}

}
