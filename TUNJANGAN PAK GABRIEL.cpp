#include <iostream>
#include<string>
using namespace std;
int main() {
    string kode,jk, lokasi = "";
    int maker, tunjangan;
    //EF-2015-L
    //EF => Supvisor, EK=>Karyawan biasa.
    //2014 => tahun masuk
    //L => Laki-laki
    //tunjangan dimana jika supvisor 2.000.000 + (1,5 persen * masa kerja) dari tunjangan
    //pengambilan tunjangan jika Laki-laki di lobi atas, jika perempuan di lobi bawah
    //EK -> 1500000
    cout << "Masukkan Kode : ";
    cin >> kode;
    if(kode.substr(0,2)=="EF")
    {
        tunjangan = 2000000;
        maker = 2024 - stoi(kode.substr(3,4));
        tunjangan = tunjangan + (0.015 * maker *tunjangan);
        lokasi = kode.substr(8,1);
        if(lokasi == "L"){
            lokasi = "Lobi Atas";
        }
        else { lokasi = "Lobi Bawah";}
    }
    else if(kode.substr(0,2)=="EK")
    {
        tunjangan = 1500000;
        maker = 2024 - stoi(kode.substr(3,4));
        tunjangan = tunjangan + (0.015 * maker *tunjangan);
        lokasi = kode.substr(8,1);
        if(lokasi == "L"){
            lokasi = "Lobi Atas";
        }
        else { lokasi = "Lobi Bawah";}
    }
        else {
            tunjangan = 0;
        }
    
    cout << "Tunjangan anda = Rp. " << tunjangan;
    cout << "\nLokasi Pengambilan di " << lokasi;
}
