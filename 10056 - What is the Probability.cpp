#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int count=0;
	cin >> count;
	//cout << count << endl;
	int player=0;
	float p=0;
	int now=0;
	int R=50;
	for(int j=0;j<count;j++){
		cin >> player;	
				
		float result[player]={0};
		//cout <<"\n j =" <<j;	
		cin >> p;
		cin >> now;	
		for(int i=0;i<player;i++){			
			//result[i] = pow((1-p),i)*p*pow(p,(R-1)*player);
			result[i] = pow((1-p),i)*p;
			//cout << result[i] << ",";	
		}	
			
		//cout << "---" << endl;	
		float sum =0;
		for(int i=0;i<player;i++){
			sum+=result[i]; 		
		}
		/*
		for(int i=0;i<player;i++){
			cout << result[i]/sum << endl;	
		}*/
		if(sum == 0){
			//cout << fixed <<setprecision(4) << 0 << endl;
			cout << "0.0000" << endl;	
		}
		else{
			//cout <<  result[now-1]/sum << endl;
			cout << fixed <<setprecision(4) << result[now-1]/sum << endl;			
		}
			
		
		player=0;
		p=0;
		now=0;
		
	}
	
}
