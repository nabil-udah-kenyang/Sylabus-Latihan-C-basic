#include <iostream>
using namespace std;
int main()
{
  cout << "##  Program C++ Persegi Angka ##" << endl;
  cout << "================================" << endl;
  cout << endl;
 
  int baris,kolom,i,j;
 
  cout << "Input baris: ";
  cin >> baris;
  cout<<"input kolom: ";
  cin>>kolom;
 
  cout << endl;
 
  for(i=1; i<=baris; i++) {
    for(j=1; j<=kolom; j++) {
      cout << i << " ";    }
    cout << endl;
 }
 
}
 
 
