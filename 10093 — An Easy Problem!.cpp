#include <iostream>
using namespace std;
/*
25616588	10093	An Easy Problem!	Accepted	C++11	0.000	2020-10-14 16:03:11
*/
/*
10秈ㄒ–计狦琌9计ê或碞砆9俱埃
*/ 
int main(){
	string input;
	int sum=0;
	int index=0;
	int base=1;
	int temp=0;
	while(getline(cin,input)){
		//cout << input;
		sum=0;
		index=0;
		base=1;
		temp=0;
		for(int i=0;i<input.length();i++){
			if(isalnum(input[i]))
				index++;
		}
		//cout <<"\n index "<< index <<"\n";
		for(int i=0;i<input.length();i++){
			//cout << "\n," << input[i];
			if(isdigit(input[i])){
				temp = (int)input[i] -'0';
				//cout <<(int)input[i] -'0';
			}
			else if(isupper(input[i])){
				temp = (int)input[i] - 'A'+10;
				//cout <<(int)input[i] - 'A'+10;
			}
			else if(islower(input[i])){
				temp = (int)input[i] - 'a'+36;
				//cout <<(int)input[i] - 'a'+36;
			}
			sum += temp;
			//cout << "\n sum: "<< sum;
			if(base<temp)
				base=temp;			
		}
		//璝 N - 1 盢琘计 –计羆㎝ 俱埃玥计 N 秈砆 N - 1 俱埃 
		
		//cout << "\n base: "<< base<<endl; 
		//cout << "\n sum: "<< sum<<endl; 
		for(int i=base;i<63;i++){//–计琌base计 
				if(sum%i == 0){					
					//cout << "\n i+1: "<< 
					cout << i+1<<endl; //i 秈 
					break;
				}
				if(i==62&&sum>62)
					cout << "such number is impossible!" <<endl;
			}	
	}
} 
