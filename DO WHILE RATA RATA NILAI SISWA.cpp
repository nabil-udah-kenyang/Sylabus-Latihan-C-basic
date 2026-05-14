#include <iostream>
using namespace std;
int main() {
    double nilai,totalnilai,rata;
    int jmlinput=0;
    do{
        cout<<"masukan nilai siswa = "; cin>>nilai;
    
    if (nilai >= 0){
        totalnilai += nilai;
        jmlinput++;
    }
    
    rata=totalnilai/jmlinput;
    
    }while(nilai >= 0);{
         cout<<"rata rata nya dalah = "<<rata;
    }
}
