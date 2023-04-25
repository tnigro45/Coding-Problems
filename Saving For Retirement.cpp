#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int bAge = 0;
	int bRetire = 0;
	int bSaves = 0;
	cin >> bAge >> bRetire >> bSaves;
	
	int aAge = 0;
	int aSaves = 0;
	cin >> aAge >> aSaves;
	
	// money saved after B retires
	int bTotalSaved = (bRetire - bAge) * bSaves;
	
	// age when A can retire with more money than B at that time
	int aRetire = 0;
	
	// counter of number of years pass
	int years = 1;
	
	// money saved when A retires
	int aTotalSaved = 0;
	
	// loops until A's money saved is more than B's
		// keeps track of the years and saves it into A's retire age
	while (aTotalSaved <= bTotalSaved){
		
		// update totalSaved for A
		aTotalSaved += aSaves;
		
		years++;
	}
	
	// calculate by adding the years needed to initial age
	aRetire = (years - 1) + aAge;
	
	cout << aRetire;
	
	return 0;
}