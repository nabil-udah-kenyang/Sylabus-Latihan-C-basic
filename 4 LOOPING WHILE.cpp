#include <iostream>
using namespace std;
int main() {
  cout << "Menampilkan Angka dari 1 sampai N" << endl;
  int a = 1;
  while (a <= 10) {
    cout << a << " ";
    a++;
  }
  cout << endl << "=======================================\n";

  cout << "Menampilkan Bilangan Ganjil dari 1 sampai N" << endl;
  int b = 1;
  while (b <= 20) {
    cout << b << " ";
    b += 2;
  }
  cout << endl << "=======================================\n";

  cout << "Menghitung Faktorial" << endl;
  int c = 1;
  int jlh = 100;
  int total = 1;

  while (c <= jlh) {
    cout << c << " x ";
    total = total * c;
    c++;
  }
  cout << " = " << total;
  cout << endl << "=======================================\n";

  cout << "Menampilkan Pola Segitiga Bintang" << endl;
  int d = 1;
  int jumlah = 5;

  while (d <= jumlah) {
    int e = 1;
    while (e <= d) {
      cout << "*";
      e++;
    }
    cout << "\n";
    d++;
  }
  cout << endl << "=======================================\n";
}
