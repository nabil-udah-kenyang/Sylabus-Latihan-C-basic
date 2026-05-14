#include <iostream>
using namespace std;
int main() {
    int batas,faktor=0,jumlah;
    string prima;
    cout << " Batas : ";
    cin >> batas;
    for (int i = 2; i<=batas; i++)
    {
    for (int j = 2; j<=i; j++) 
    {
        if(i%j==0){
            faktor = faktor + 1;
        }
        
    }
    if (faktor == 1){
        cout << i << ", " ;
    }
    
    jumlah=jumlah+1;
faktor = 0;
    }
    
    return 0;
}
