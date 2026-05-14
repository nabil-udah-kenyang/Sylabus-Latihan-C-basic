#include <iostream>
using namespace std;
int main (){
	
	int status;
	int penghasilan;
	double pajak,totalpajak;
	
	cout<<"DAFTAR STATUS :	\n1.lajang\n2.menikah"<<endl;
	cout<<"============================================"<<endl;
	
	cout<<"masukan status anda \t: ";
	cin>>status;
	cout<<"masukan penghasilan anda \t: ";
 	cin>>penghasilan;
 	
 	if(status == 1){
	 		if(penghasilan <= 5000000){
	 			pajak = 0.05;
			 }
			 else if(penghasilan <=10000000){
			 	pajak = 0.1;
			 }
			 else if(penghasilan > 10000000){
			 	pajak = 0.15;
		 }
	 }
	 
	 else if(status == 2){
	 	if(penghasilan <= 5000000){
	 			pajak = 0.03;
			 }
			 else if(penghasilan <=10000000){
			 	pajak = 0.08;
			 }
			 else if(penghasilan > 10000000){
			 	pajak = 0.1;
	 }
}
	 
	 else {
	 	cout<<"inputan salah coy";
	 }
	 
	 totalpajak = penghasilan * pajak;
	 cout<<"total pajak anda adalah : "<<totalpajak;
}
