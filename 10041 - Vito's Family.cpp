#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int array[30000]={0};
    int ans=0;
    int count=0;
    int size=0;
    cin>>count;
    for(int i=0;i<count;i++)
    {
    	cin>>size;
    	for(int i=0;i<size;i++)
    	{
    		cin>>array[i];    		
		}
		sort(array,array+size);
		int mid=array[(size/2)];
		//cout <<"mid"<<mid<< endl;
		for(int i=0;i<size;i++)
    	{
			int cal=mid-array[i];
			//cout << cal <<",";
    		ans+=abs(cal);	
			//cout << ans << endl; 
		}
		cout<<ans<<endl;
		ans=0;
	}    
    return 0;
}
