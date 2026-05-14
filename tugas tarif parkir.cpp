#include <iostream>
using namespace std;
int main(){
	int waktu;
	int tarif;
	
	cout<<"berapa jam anda parkir cuy = ";
	cin>>waktu;
	
	if(waktu < 1){
		tarif=5000;
	}
	else if(waktu <=5 ){
		tarif=10000;
	}
	
	else if(waktu >5){
		tarif=20000;
	}
	
	
	
	
	cout<<"TARIF TOL ANDA "<<tarif<<" rupiah"<<endl;
	cout<<"======================================================================"<<endl;
	cout<<"JANGAN LUPA BAYAR YA  BANG :)";
	
	
	
}
