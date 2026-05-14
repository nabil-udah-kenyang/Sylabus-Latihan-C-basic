#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> nama ={"rizaal","rendi","akbar"};
    
    
    nama.push_back("nabil");
    nama.push_back("unknown");
    nama.pop_back();
    
    
    for(string siswa : nama){
        cout<<siswa<<endl;
    }
    
    cout<<endl;
    
    cout<<nama.front();
     cout<<endl;
    cout<<nama.back();
     cout<<endl;
     cout<<endl;
     
     
    cout<<nama.size();
    cout<<endl;
    bool kosong=nama.empty();
    cout<<kosong;
   
    
}
