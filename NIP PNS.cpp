#include <iostream>
#include <string>
using namespace std;
int main(){
    string nama,nip;
    string tahun_lahir,bulan_lahir,tanggal_lahir;
    string tahun_cpns,bulan_cpns;
    string jenis_kelamin;
    string urutan,ulang;
    int umur,maker;
    
    do{
        system("cls");
        cout<<"masukan nama anda \t\t\t\t= ";cin>>nama;
        cout<<"masukan kode nip anda \t\t\t= ";cin>>nip;
    
    tahun_lahir= nip.substr(0,4);
    bulan_lahir= nip.substr(4,2);
    tanggal_lahir = nip.substr(6,2);
    tahun_cpns=nip.substr(8,4);
    bulan_cpns= nip.substr(12,2);
    jenis_kelamin= nip.substr(14,1);
    urutan = nip.substr(15,3);
    umur = 2024- stoi(tahun_lahir);
    maker= 2024-stoi(tahun_cpns);
    
    
    if(jenis_kelamin == "1"){
        jenis_kelamin="pria";
    }else if(jenis_kelamin == "2"){
        jenis_kelamin="wanita";
    }else{
        jenis_kelamin = "unknown";
    }
    
    cout<<"nama anda \t\t\t\t\t\t= "<<nama<<endl;
    cout<<nama<<" lahir pada\t\t\t\t= "<<tanggal_lahir<<"-"<<bulan_lahir<<"-"<<tahun_lahir<<endl;
    cout<<nama<<" sekarang berumur\t\t= "<<umur<<"tahun"<<endl;
    cout<<nama<<" menjadi pns pada\t\t= "<<bulan_cpns<<"-"<<tahun_cpns<<endl;
    cout<<nama<<" berjenis kelamin\t\t= "<< jenis_kelamin<<endl;
    cout<<nama<<" urutan ke \t\t\t\t= "<<urutan<<" menjadi cpns"<<endl;
    cout<<nama<<"telah menjadi pns selama = "<<maker<<" tahun"<<endl;
    
    cout<<"ulang?<y/n>";cin>>ulang;
    }while(ulang=="y");{
        system("cls");
        cout<<"program selesai";
    }
    
    
    
    
}
