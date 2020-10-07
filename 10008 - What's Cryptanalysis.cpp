/*
25585822	10008	What's Cryptanalysis?	Accepted	C++11	0.000	2020-10-07 07:06:35
*/


#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;
bool complare(int a ,int b){
	return a>b;
}
int main(){
	int count=0;
	int alp[26]={};
	string input;
	//char alp[26]={};
	cin >> count ;
	getline(cin,input);//¦Y±¼´«¦æ¦r¤¸ 
	//cout << "count" << count <<endl;
	for(int i=0;i<count;i++){
		//cout << "\n now " << i ;
		getline(cin,input);
		//cout << " size "<<input.size() << endl;
		//cout << "a" << (int)'a' << "A" << (int)'A' <<endl;  
		
		for(int j=0;j<input.size();j++){
			//cout << toupper(input[j])-(int)'A' << " . ";
			
			if((input[j]>='a' && input[j]<='z')||(input[j]>='A' && input[j]<='Z'))
				alp[toupper(input[j])-(int)'A']++;
			//alp[input[j]-'A']++;
			
		}
		
		//cout <<"finish1\n";
		
		
	}
	//cout <<"finish2\n";
	//cout << endl;
	//alp[0]++;
	//sort(alp,alp+26,complare);
	
	for(int j=300;j>0;j--){	
		for(int i=0;i<26;i++){			
			if(alp[i] != 0 && alp[i]==j)
			{
				cout << char(i+65 )<< " ";;
				cout << alp[i] << endl;
			}
		}
	}
	//cout << endl;
}
