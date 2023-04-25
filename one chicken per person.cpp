#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int numPeople = 0;
	int numChicken = 0;
	cin >> numPeople >> numChicken;
	
	int piecesLeft = numChicken - numPeople;
	int piecesNeeded = 0;
	
	// how many pieces of chicken are left
	
	// case where pieces left is only 1
	if (piecesLeft == 1){
		
		cout << "Dr. Chaz will have 1";
		cout << " piece of chicken left over!";
		
		// any other case where pieces left is over 1
	} else if (piecesLeft > 1){
		
		cout << "Dr. Chaz will have " << piecesLeft;
		cout << " pieces of chicken left over!";
	}
	
	// more pieces of chicken are needed
	
	// case where pieces left is negative (needs more instead)
	if (piecesLeft < 0){
		
		piecesNeeded = numPeople - numChicken;
		
		// case where pieces needed is exactly 1
		if (piecesNeeded == 1){
			
			cout << "Dr. Chaz needs 1";
			cout << " more piece of chicken!";
			
			// any other case where pieces needed is over 1
		} else{
			
			cout << "Dr. Chaz needs " << piecesNeeded;
			cout << " more pieces of chicken!";
		}
	}
	
	return 0;
}