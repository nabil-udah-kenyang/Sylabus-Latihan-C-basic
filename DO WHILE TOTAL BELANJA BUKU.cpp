#include <iostream>
using namespace std;
int main() {
    int harga,total_harga;
    do{
    cout<<"masukan harga buku = "; cin>>harga;
    total_harga += harga;
    
    } while(harga>0);{
        cout<<"total belanjaan anda = "<<total_harga;
    }
    
}
