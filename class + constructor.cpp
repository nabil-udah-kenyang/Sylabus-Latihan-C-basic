#include <iostream>
using namespace std;

//=================== CLASS ========================
class datasiswa{
  public:
   string nama;
   int umur;
   int tinggi;
   int berat;
//=================== CONSTRUCTOR ========================   
   datasiswa(string a,int b,int c,int d){
       nama=a;
       umur=b;
       tinggi=c;
       berat=d;
   }
//=================== METHOD ========================   
   int nilai(int angka){
      return angka ;
   }
};

int main() {
    
    datasiswa data1("iwan motor",21,185,67);
    datasiswa data2("noni kader",21,166,50);
    
    
    
//     data1.nama="iwan";
//     data1.umur=43;
//     data1.tinggi=180;
//     data1.berat=68;
//     data1.nilai(80);

 cout<<data1.nama<<endl<<data1.umur<<endl<<data1.tinggi<<endl<<data1.berat<<endl<<data1.nilai(70)<<endl;
 
 cout<<"==============================================="<<endl;
 
  cout<<data2.nama<<endl<<data2.umur<<endl<<data2.tinggi<<endl<<data2.berat<<endl<<data2.nilai(90);
    
}
