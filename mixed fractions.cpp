#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	
	// stores whole int of the mixed fraction
	int dividend = 0;
	
	// stores the first part of the fraction
	int remainder = 0;
	
	// loops through all valid inputs, until 00 is reached
	while ((num1 != 0) && (num2 != 0)){
		
		dividend = num1 / num2;
		remainder = num1 - (num2 * dividend);
		
		cout << dividend << " ";
		cout << remainder << " / ";
		cout << num2;	
		cout << endl;
		
		cin >> num1 >> num2;
	}
	
	return 0;
}