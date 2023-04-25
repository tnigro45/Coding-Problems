#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string num1, num2;
	cin >> num1 >> num2;
	
	int count = 0;
	
	for (int i = 0; i < 4; i++){
		
		if (num1[i] != num2[i]){
			count++;
		}
	}
	
	cout << pow(2, count);
	
	return 0;
}