#include <stdlib.h> 
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int count,size=0;
	int array[30000]={0};
	int ans[500]={0};
	cin>>count;
	for(int i=0;i<count;i++)
	{
		cin>>size;
		for(int j=0;j<size;j++)
		{
			cin>>array[j];			
		}
		sort(array,array+size);
		int mid = array[(size/2)];
		int cal=0;
		for(int j=0;j<size;j++)
		{
			cal = abs(mid-array[j]);
			ans[i] += cal;	
		}		
	}
	for(int i=0;i<count;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}
