#include <iostream>
using namespace std;
int main(){
	string golongan;
	int tarif;
	
	cout<<"masukan golongan anda : ";
	cin>>golongan;
	
	if(golongan=="1"){
		tarif=3000;
		}
		
		else if(golongan=="2"){
		tarif=5000;
		}
		
		else if(golongan=="3"){
		tarif=8000;
		}
		
		else{
		tarif=10000;
		}
		
		cout<<"TARIF TOL ANDA "<<tarif<<endl;
	}