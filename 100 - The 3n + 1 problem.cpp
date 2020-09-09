#include <iostream>
#include <stdlib.h>
using namespace std;
/*
2020/09/28 AC
*/


int main(){
	int a,b=0;
	int max=0;
	while(cin >> a >> b){
		cout <<a<< " "<<b<< " ";
		if(a>b)
			swap(a,b);
		for(int i = a; i<=b ;i++){
			long long n;
			int count=1;
			n=i;
			while(n != 1){
				count++;		
				//cout << n << " ";
				if(n%2 == 1){
				n=(3*n)+1;
				}
				else{
					n=(n/2);
				}
				if(n==1)
					;//cout << n << " ";
			}
			//cout << "now : "<< i <<" , count : " <<count <<endl;
			if(count>max)
				max=count;		
		}
		cout << max << endl;
		max=0;
	}
	return 0;	
} 
