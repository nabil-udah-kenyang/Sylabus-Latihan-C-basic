#include <iostream>
using namespace std;
int main() {
    float jamkerja,bonus,jamlembur,absen,gaji,totalgaji;
    cout << "Masukkan Jam Kerja : ";
    cin>>jamkerja;
    cout<<"Masukkan Absen : ";
    cin >> absen;
    if(jamkerja>160){
        jamlembur = jamkerja-160;
    }
    else {
        jamlembur = 0;
    }
    if(absen <=3 ){
        bonus = 500000;
    }
    else {bonus = 0; }
    
    gaji = 4000000+bonus+(jamlembur*50000);
    totalgaji = gaji - (gaji * 0.05);
    cout << "Gaji Pokok = Rp. 4000.000" <<endl;
    cout << "Lembur = Rp. " << jamlembur*50000<<endl;
    cout << "Bonus = Rp. "<< bonus << endl;
    cout << "Total Gaji = Rp. "<< totalgaji << endl;
    
}
