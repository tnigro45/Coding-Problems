#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int min = 0;
	cin >> min;
	
	int middle = 0;
	cin >> middle;
	
	int max = 0;
	cin >> max;
	
	int rangeLeft = (middle - min) - 1;
	int rangeRight = (max - middle) - 1;
	
	if (rangeLeft > rangeRight){
		
		cout << rangeLeft;
		
	} else{
		
		cout << rangeRight;
	}

	return 0;
}