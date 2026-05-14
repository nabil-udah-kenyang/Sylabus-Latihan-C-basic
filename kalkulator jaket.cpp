#include <iostream>
using namespace std;
int main(){

int harga,jumlahbarang,total,pilihan;
string item;

cout<<"item tersedia : "<<endl;
cout<<"==========================="<<endl;
cout<<"1. Jaket size M"<<endl;
cout<<"2. Jaket size L"<<endl;
cout<<"3. Jaket size XL"<<endl;
cout<<"4. Jaket size XXL"<<endl;
cout<<"5. Jaket size XXXL"<<endl;
cout<<"6. Jaket size 4XL"<<endl;
cout<<"7. Jaket size 5XL"<<endl;
cout<<"8. SELESAI"<<endl;
cout<<"==========================="<<endl;

do{
    cout<<"masukan pilihan : ";
cin>>pilihan;

if(pilihan ==1 ){
    item ="jaket size M";
    harga=120000;
    cout<<"masukan jumlah : ";
    cin>>jumlahbarang;
    total+= harga*jumlahbarang;
    cout<<"Rp. "<<harga*jumlahbarang <<endl;
    
    }
    
    else if(pilihan ==2 ){
        item ="jaket size L";
        harga=125000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
    
     else if(pilihan ==3 ){
        item ="jaket size XL";
        harga=130000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
       cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==4 ){
        item ="jaket size XXL";
        harga=135000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==5 ){
        item ="jaket size XXXL";
        harga=140000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==6 ){
        item ="jaket size 4XL";
        harga=145000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==7 ){
        item ="jaket size 5XL";
        harga=150000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
    
     else if (pilihan == 8){
        cout<<"Total belanja anda"<<" "<< total<<endl;
         
     }
        
     else{
         cout<<"JANGAN NGANTUK BANG NABIL"<<endl;
     }
 }while(pilihan !=8);
cout<<"==========================="<<endl;
    cout<<"     TERIMAKASIH CUYY   ";
}


