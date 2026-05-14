#include <iostream>
#include <string>
using namespace std;

void delay(int miliseconds){
this_thread::sleep_for (chrono::miliseconds(miliseconds));
}

int main(){
	
	string text = "watch my heart buuuuuurrrrrrn\n with the fire that ypu started";
	
	for (size_t  i=0; i<text.length(); i++){
		cout<< text [i];
		cout.flush();
		delay(100);
		
		if(text[i] == '\n' ){
			
			delay(200);
		}
	}
	
	
}
