/*
25596584	12019	Doom's Day Algorithm	Accepted	C++11	0.000	2020-10-09 16:11:33
*/

#include <iostream>
using namespace std;

int main(){
	int num=0;
	string week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	cin >> num;
	for(int i=0;i<num;i++){
		int month,day;
		int count=0;
		cin >> month >> day;
		if(month == 1){
			cout << week[(4+day)%7];
		}
		if(month == 2){
			cout << week[(day)%7];
		}
		if(month == 3){
			cout << week[(day)%7];
		}
		if(month == 4){
			cout << week[(3+day)%7];
		}
		if(month == 5){
			cout << week[(5+day)%7];
		}
		if(month == 6){
			cout << week[(1+day)%7];
		}
		if(month == 7){
			cout << week[(3+day)%7];
		}
		if(month == 8){
			cout << week[(6+day)%7];
		}
		if(month == 9){
			cout << week[(2+day)%7];
		}
		if(month == 10){
			cout << week[(4+day)%7];
		}
		if(month == 11){
			cout << week[(day)%7];
		}
		if(month == 12){
			cout << week[(2+day)%7];
		}
		cout << endl;	
	}
}
