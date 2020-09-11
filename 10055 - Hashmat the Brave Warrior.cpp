#include <bits/stdc++.h>
using namespace std;
/*
https://zerojudge.tw/Submissions
2020/09/28 AC
*/
int main(){
	long long a;
	long long b;
	long long array[100]={0};
	int j=0;
	while(cin >> a >>b)
	{
		b = abs(a-b) ;
		cout << b <<endl;	
	}
	return 0;
}
