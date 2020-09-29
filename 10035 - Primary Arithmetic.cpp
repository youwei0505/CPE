#include <iostream>
using namespace std;
/*
2020/9/28 AC

*/
int main(){
	long long a,b;
	long long a_temp,b_temp=0;
	int carry=0;
	int carry_count=0;
	while(true){
		carry_count=0;
		carry=0;
		cin >> a >> b;		
		if(!(a==0 && b==0)){
			while(true)
			{			
				a_temp=a%10;
				b_temp=b%10;			
				if(a_temp+b_temp+carry>= 10){
					carry=1;
					a/=10;b/=10;
					++carry_count;
				}
				else{
					a/=10;b/=10;
					carry=0;
				}
				if(a+b+carry<10)
				{
					if(carry_count==1)
						cout << carry_count << " carry operation." << endl;				
					else if(carry_count==0)
						cout << "No carry operation." << endl;
					else
						cout << carry_count << " carry operations." << endl;
					break;
				}
			}				
		}
		else{
			return 0;
		}		
	}	
}
