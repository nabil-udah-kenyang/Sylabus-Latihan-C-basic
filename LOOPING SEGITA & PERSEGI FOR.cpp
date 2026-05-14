#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cout << "Masukkan jumlah bintang: ";
    cin >> n;
    
    cout<<"========================================================\n";
    cout<<"SEGITIGA NORMAL\n";
       for(a=1;a<=n;a++){
        for(b=0;b<a;b++){
        cout<<"*";}
        cout<<endl;
    }
    
    
    
    cout<<"========================================================\n";
    cout<<"SEGITIGA KEBALIK\n";

    for (int a = n; a >= 1; a--) { 
        for (int b = 1; b <= a; b++) { 
            cout << "*";
        }
        cout << endl; 
    }
    
    
    cout<<"========================================================\n";
    cout<<"PERSEGI\n";
    
    for(a=1;a<=n;a++){
    	for(b=1;b<=n;b++){
    		cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<"========================================================\n";
    cout<<"PERSEGI PANJANG\n";
    
    for(a=1;a<=n;a++){
    	for(b=1;b<=n;b++){
    		cout<<"* ";
		}
		cout<<endl;
	}

 
   
   
}

