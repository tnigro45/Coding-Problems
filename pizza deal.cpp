#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int sliceArea = 0;
	int slicePrice = 0;
	cin >> sliceArea >> slicePrice;
	
	int wholeRadius = 0;
	int wholePrice = 0;
	cin >> wholeRadius >> wholePrice;
	
	int wholeArea = 3.14 * (wholeRadius * wholeRadius);

//	double sliceRatio = 5.0/10.0;
//	double wholeRatio = 5.0/11.0;
	
	float sliceRatio = (slicePrice * 1.0 / sliceArea * 1.0);
	float wholeRatio = (wholePrice * 1.0 / wholeArea * 1.0);
	
//	cout << "sliceArea: " << sliceArea << endl;
//	cout << "slicePrice: " << slicePrice << endl;
//	cout << "wholeRadius: " << wholeRadius << endl;
//	cout << "wholePrice: " << wholePrice << endl;
//	
//	cout << "wholeArea: " << wholeArea << endl;
//	cout << "sliceRatio: " << sliceRatio << endl;
//	cout << "wholeRatio: " << wholeRatio << endl;
//	
//	return 0;
	
	if (wholeRatio < sliceRatio){
		
		cout << "Whole pizza";
		
	} else{
		
		cout << "Slice of pizza";
	}
	
	return 0;
}