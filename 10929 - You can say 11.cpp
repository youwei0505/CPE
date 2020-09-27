#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;
/*
2020/09/28 AC

*/
int main(){
	string n;
	int odd,even=0;
	while( cin >> n )
	{
		odd=0;even=0;
		long long num ;
		istringstream(n) >> num ;
		if(  num == 0 ){
			return 0;
		}
		for(int i=0;i<n.size();i++)
		{
			//cout << n[i] << ",";
			if(i%2 == 0)
				even+=(n[i] - '0');
			else
				odd+=(n[i] - '0');
		}
		//cout << endl;
		//cout << "odd" << odd <<", even" << even <<endl;
		//cout << "abs" << abs(odd-even)<<endl;
		if( abs(odd-even) %11 == 0)
			cout << n << " is a multiple of 11." << endl;
		else
			cout << n << " is not a multiple of 11." << endl;
		
	}
}
