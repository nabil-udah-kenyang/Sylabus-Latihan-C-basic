#include <iostream>
using namespace std;
int main() {

  string kartu_pelanggan;
  int jumlah_item;
  float total_belanja;

  cout << "apakah anda memiliki kartu pelanggan? (ya/tidak)= ";
  cin >> kartu_pelanggan;
  cout << "masukan jumlah item yang anda beli = ";
  cin >> jumlah_item;
  cout << "masukan total belanja anda = ";
  cin >> total_belanja;

  if (kartu_pelanggan == "ya" || total_belanja > 500000) {
    cout << "SELAMAT DISKON KAU COY";
  }

  else if (jumlah_item >= 2 || total_belanja >= 100000) {
    cout << "SELAMAT DISKON KAU COY";
  }

  else {
    cout << "MAAF ANDA TIDAK MEMENUHI MINIMUM SYARAT UNTUK DISKON";
  }
}
