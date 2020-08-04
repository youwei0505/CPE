
/*
25595877	272	TEX Quotes	Accepted	C++11	0.000	2020-10-09 13:49:01
*/#include <iostream>
using namespace std;

int main(){
	string input;
	bool flag=false;
	while(getline(cin,input)){	
		for(int i=0;i<input.size();i++){
			if((input[i]=='"'))
				{
					if(flag==false){
						flag=true;
						cout << "``";
					}
					else{
						flag=false;
						cout << "''";
					}
						
				}
			else
				cout << input[i] ;
		}
		cout << endl;
	}
	
} 
