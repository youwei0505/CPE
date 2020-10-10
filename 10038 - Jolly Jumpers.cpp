/*
25600339	10038	Jolly Jumpers	Accepted	C++11	0.000	2020-10-10 16:34:10
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int count=0;
	while(cin >> count){		
		int array[3000]={0};
		bool pos[3000]={0};
		for(int i=0;i<count;i++){
			cin >> array[i];
		}
		bool flag=true;
		if(count == 2){
			if( abs(array[0]-array[1])!= 1){
					//cout << "2\n";
					flag=false;
				}
		}
		else if(count!=1){
			for(int i=0;i<count-1;i++){
				//cout << "Jolly\n";
				int temp=0;
				temp = 	(abs(array[i]-array[i+1]));
				pos[temp]=true;
				//cout <<"pos[temp]" << pos[temp] << "  ,temp" <<temp<< endl;													
			}
			sort(pos,pos+count);
			for(int i=1;i<count;i++){
				//cout <<"pos["<<i<<"]" << pos[i] << endl;
				if(pos[i]==false)
					flag = false;
			}
		}
		
		if(!flag){
			cout << "Not jolly\n";
		}
		else{
			cout << "Jolly\n";
		}
	}
	
} 
