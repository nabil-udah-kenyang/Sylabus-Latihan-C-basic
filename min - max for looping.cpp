#include <iostream>
#include <string>
using namespace std;

int main() {
  int max=0,min=100,jumlah=0, nilai,data;
  cout<<"masukkan jumlah data : ";
  cin >> data;
  for (int i = 1; i <= data; i++) {
  cout << " Masukkan Nilai Ke -" << i << ": ";
  cin >> nilai;
  if(nilai > max){
      max = nilai;
  }
  if (nilai<min){
      min=nilai;
  }
  if (nilai >=0)
  {
      jumlah = jumlah + nilai;
  }
}
  cout << "Nilai max = " << max; cout << "\n Nilai Min = " << min;
  cout << "\n Jumlah angka pos = " << jumlah;
}
