#include <iostream>
using namespace std;
int main(){
	int banyak_harga;
	int harga[] = {1000,2000,15000.5000,7000,8000,4000,8900,6000,25000,50000};
	
	banyak_harga = sizeof(harga)/sizeof(*harga);
	
	cout<<banyak_harga<<endl;
	for(int a=0 ;a<banyak_harga;a++){
		cout<<harga[a]<<endl;
	}
	
}
