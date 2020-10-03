#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm> 

using namespace std;

int main(){
	int num=0;
	cin >> num;
	string temp;
	string country[num];
	
	for(int i=0;i<num;i++){
		cin >> country[i];
		getline(cin,temp);
	}	
	sort(country,country+num);
	//cout << " \n sort -";
	for(int i=0;i<num;i++){
		;//cout << country[i] << " . ";
	}	
	//cout << " \n counting" << endl;
	int count=0;
	
	for(int i=0;i<num;i++){
		count++;			
		if( (i == num-1) || (country[i] != country[i+1]) ){				
			cout << country[i] << " ";			
			cout << count << endl;
			count=0;
			continue;
		}
	}		
}
