#include <iostream>
using namespace std;

int digit(int in){
	int temp=0;
	while(in>0){
		temp+=in%10;
		//cout << "temp - " <<temp <<endl;
		in/=10;
	}
	//cout << temp;
	return temp;
}

int main(){
	long long input;
	while(true){
		cin >> input;
		if(input == 0)
			break;
		while(true){
			input = digit(input);
			if(input<10)
				break;
		}	
		cout << input << endl;
	}	
}
