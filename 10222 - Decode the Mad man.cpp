#include <iostream>
using namespace std;

int main(){
	string input;
	string keyborad="`234567890-=qwertyuioop[]asdfghjkl;'zxcvbnm,./,";
	char temp;
	while(getline(cin,input)){
		for(int i=0;i<input.size();i++){
		temp=input[i];
		int pos = keyborad.find(temp);
		input[i]= keyborad[pos-2];
		}
		cout << input << endl;
	}
	
} 
