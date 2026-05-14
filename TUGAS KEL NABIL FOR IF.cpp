#include <iostream>
using namespace std;
int main() {
    int nilai,jlhsiswa,total=0,kkm=0,tdkkkm=0,sempurna=0,max=0,min=101;
    double rata;
    string kualitas,kesimpulan,mapel,ulang;
    
    do{
        system("cls");
    cout<<"==========================================="<<endl;
    cout<<"||"<<"             NILAI UJIAN SISWA         "<<"||"<<endl;
    cout<<"==========================================="<<endl;
    cout<<endl;
    cout<<"masukan nama mapel\t : ";cin>>mapel;
    cout<<"masukan jumlah siswa\t : ";cin>>jlhsiswa;
    
    cout<<"--------------------------------------------\n";
    
    for(int a=1;a<=jlhsiswa;a++){
        cout<<"masukan nilai ujian siswa ke - "<<a<<" : ";
        cin>>nilai;
        total+=nilai;
        
        if(nilai>= 88){
            kkm++;
        }else{
            tdkkkm++;
        }
        if(nilai == 100){
            sempurna++;
        }
        if(nilai>max){
            max=nilai;
        }if(nilai<min){
            min=nilai;
        }
    }
    rata= total/jlhsiswa;
        if(rata>=88){
            kualitas="A";
            kesimpulan="keren,calon-calon orang sukses ";
        }else if(rata>=70){
            kualitas="B";
            kesimpulan="Not bad,bisa terus dikembangkan";
        }
        else{
            kualitas="C";
            kesimpulan="suruh kak gem aja yang ngajar,biar PAHAM";
        }
        
        
    cout<<endl;
    cout<<"==========================================="<<endl;
    
    cout<<"NAMA MAPEL   \t\t\t\t: "<<mapel<<endl;
    cout<<"rata-rata nilai siswa \t\t\t: "<<rata<<endl;
    cout<<"jmlh siswa yg nilai sempurna \t\t: "<<sempurna<<endl;
    cout<<"nilai maksimal siswa \t\t\t: "<<max<<endl;
    cout<<"nilai minimal siswa \t\t\t: "<<min<<endl;
    cout<<"jumlah siswa yang lulus \t\t: "<<kkm<<endl;
    cout<<"jumlah siswa yang tidak lulus \t\t: "<<tdkkkm<<endl;
    cout<<"kualitas murid kelas anda \t\t: "<<kualitas<<endl;
    cout<<"KESIMPULAN DARI PREDIKAT NILAI \t\t: "<<kesimpulan;
    cout<<endl;
    cout<<"ingin ulangi ?<y/n> = ";cin>>ulang;
    }while(ulang == "y");
    
    cout<<"PROGRAM SELESAI,SENANG BISA MEMBANTU :) ";
}
