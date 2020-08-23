#include <iostream> 
#include <cstring>
using namespace std;

void bangla(long long int input){
	if(input >= 10000000){
		bangla(input / 10000000);
		cout << "kuti ";
		input%=10000000;
	}
	if(input >= 100000){
		bangla(input / 100000);
		cout << "lakh ";
		input%=100000;
	}
	if(input >= 1000){
		bangla(input / 1000);	
		cout << "hajar ";
		input%=1000;
	}
	if(input >= 100){
		bangla(input / 100);
		cout << "shata ";
		input%=100;
	}
	if(input)
		cout << input << " ";
}

int main(){
	long long int num;
	int count_example=1;
	while(cin >> num){
		printf("%4d.",count_example);
		bangla(num);
		count_example++;
	}	
}
