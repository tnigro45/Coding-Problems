#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string num;
	cin >> num;
	
	int skip = 1;
	
	for (int i = 0; i < 3; i++){
		
//		cout << num[i] << " ";
		
		if (num[i] != '5'){
			skip = -1;
			
			break;
		}
	}
		
	if (skip == -1){
		
		cout << "NO";
		
	} else{
		
		cout << "YES";
	}
	
	return 0;
}