#include <iostream>
using namespace std;
int main(){
	
	int biaya,total;
	cout<<"masukan biaya belanja anda = ";
	cin>>biaya;
	
	cout<<endl;
	
	if(biaya>=5000){
		total= biaya-500;
		cout <<"=====SELAMAT ANDA MENDAPATKAN DISKON SEBESAR 1000====="<<endl;
		cout<<endl;
	}
	else{
		total=biaya;
		cout<<"=====MAAF ANDA TIDAK MEMENUHI S&K PROMO====="<<endl;
		cout<<endl;
		}
		
		
		cout<<"biaya belanja anda\t   = "<<biaya<<endl;
		cout<<"total belanja anda\t   = "<<total<<endl;
		cout<<endl;
		cout<<endl;
		
		cout<<"===================================================================\n                 !! TERIMAKASIH JANGAN BELI LAGI !!\n===================================================================";
		
}