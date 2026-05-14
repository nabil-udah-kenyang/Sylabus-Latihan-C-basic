#include<iostream>
using namespace std;
int main(){
	int jml_barang;
	float diskon,total_diskon,total_harga;
	
	cout<<"masukan jumlah barang = ";
	cin>>jml_barang;
	
	if(jml_barang > 10){
		diskon=0.15;	}
		
		else if(jml_barang >=5){
			diskon=0.1;
		}
		
		else if(jml_barang < 5){
			diskon=0;
		}
		
		total_diskon =jml_barang *100000*diskon;
		total_harga =(jml_barang* 100000)-total_diskon;
		
		cout<<total_harga;
	
}
