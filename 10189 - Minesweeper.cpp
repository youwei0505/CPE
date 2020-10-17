#include <iostream>
using namespace std; 

/*
25626817	10189	Minesweeper	Accepted	C++11	0.000	2020-10-17 12:10:29
最後一case不用再換行，其他之間要!不然會PRE Error 
*/
int main(){
	int x,y;
	int num =0;
	
	string s;
	char map[101][101];
	int count[101][101];
	bool flag=false;
	while(cin >> x >> y){
		//cout << num << endl;  
		if( x == 0 && y == 0 )
			break;
		/*
		if(flag)
			cout << endl;
		flag = true;
		*/		
		if (num!=0) cout << endl;
		//歸零 
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				count[i][j]=0;
				map[i][j]='\0';
			}
		}
		
		//放入2維陣列 
		for(int i=0;i<x;i++){
			cin >> s;
			for(int j=0;j<y;j++){
				if(s[j]=='*')
					map[i][j]='*';
				else
					map[i][j]='.';
			}
		}
		
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				if( i > 0 && j > 0 && map[i-1][j-1]=='*') { 
					count[i][j]+=1;
				} 
				if( j > 0 && map[i][j-1]=='*') { 
					count[i][j]+=1;
				} 				
				if( j > 0 && i < x && map[i+1][j-1]=='*' ) { 
					count[i][j]+=1;
				} 
				if( i > 0 && map[i-1][j]=='*'){ 
					count[i][j]+=1;
				} 
				if(map[i][j]=='*') { 
					count[i][j]+=1;
				} 
				if(i < x && map[i+1][j]=='*' ) {
					count[i][j]+=1;
				} 
				if( i > 0 && j < y && map[i-1][j+1]=='*' ) { 
					count[i][j]+=1;
				} 
				if( j < y && map[i][j+1]=='*' ) { 
					count[i][j]+=1;
				} 
				if(i < x && j < y && map[i+1][j+1]=='*' ){ 
					count[i][j]+=1;
				} 
			}
		}
		 
		//if (num!=1) cout << endl;
		//cout << "Field #" << num+1 <<":"<<endl;
		cout <<"Field #"<<num+1<<":"<<endl;
	    for(int i=0;i<x;i++){   
	      for(int j=0;j<y;j++){
	        if (map[i][j]=='*') cout <<"*";
	        else cout << count[i][j]; 
	      }	      
	      cout << endl;              
	    }
	    //cout << endl;
		num++;
	}
	//cout << '\b' ;
}
