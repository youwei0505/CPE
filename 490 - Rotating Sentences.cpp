#include <iostream>
using namespace std;

int main(){
	string s[101]={};
	int count=0;
	int max=0;
	int in=0;
	while(getline(cin,s[in])){
		//cout << in << ".";
		//cout << s[in];
		//cout << endl;
		
		if(max<s[in].length())
			max=s[in].length();
			
		in++;
		
		if(in>10)
			break;
		
			
	}
	//cout << " max "<<max << endl;
	for(int j=0;j<max;j++){
		for(int i=in-1;i>=0;i--){
			if(s[i].length() < j || s[i][j] == ' '|| s[i][j] == '\0')
				cout << '-';
			else
				cout << s[i][j] ;
		}
		cout <<endl;
	}
}
