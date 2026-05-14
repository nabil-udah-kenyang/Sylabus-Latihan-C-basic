#include <iostream>
using namespace std;
int main(){

int harga,jumlahbarang,total,pilihan;
string item;

cout<<"item tersedia : "<<endl;
cout<<"==========================="<<endl;
cout<<"1. rust 250 "<<endl;
cout<<"2. rust 500 "<<endl;
cout<<"3. engine 250"<<endl;
cout<<"4. engine 500"<<endl;
cout<<"5. scratch"<<endl;
cout<<"6. black magic"<<endl;
cout<<"7. anti karat"<<endl;
cout<<"8. microfiber"<<endl;
cout<<"9. SELESAI"<<endl;
cout<<"==========================="<<endl;

do{
    cout<<"masukan pilihan : ";
	cin>>pilihan;

if(pilihan ==1 ){
    item ="rust 250";
    harga=15000;
    cout<<"masukan jumlah : ";
    cin>>jumlahbarang;
    total+= harga*jumlahbarang;
    cout<<"Rp. "<<harga*jumlahbarang <<endl;
    
    }
    
    else if(pilihan ==2 ){
        item ="rust 500";
        harga=19000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
    
     else if(pilihan ==3 ){
        item ="engine 250";
        harga=18000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
       cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==4 ){
        item ="engine 500";
        harga=25000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==5 ){
        item ="scratch";
        harga=22000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==6 ){
        item ="black magic";
        harga=25000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
     else if(pilihan ==7 ){
        item ="anti karat";
        harga=24000;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
    else if(pilihan ==8 ){
        item ="microfiber";
        harga=4500;
        cout<<"masukan jumlah : ";
        cin>>jumlahbarang;
        total+=harga*jumlahbarang;
        cout<<"Rp. "<<harga*jumlahbarang <<endl;
    }
    
     else if (pilihan == 9){
        cout<<"Total belanja anda"<<" "<< total<<endl;
         
     }
        
     else{
         cout<<"JANGAN NGANTUK BANG NABIL"<<endl;
     }
 }while(pilihan !=9);
	cout<<"==========================="<<endl;
    cout<<"     TERIMAKASIH CUYY   ";
}


