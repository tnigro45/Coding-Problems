#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int numSolutions = 0;
	int timeLimit = 0;
	cin >> numSolutions >> timeLimit;
	
	int solutions[numSolutions];
	
	int temp = 0;
	
	for (int i = 0; i < numSolutions; i++){
		
		cin >> temp;
		solutions[i] = temp;
	}
	
	int max = 0;
	
	for (int i = 0; i < numSolutions; i++){
		
		if (max < solutions[i]){
			
			max = solutions[i];
		}
	}
	
	int minTimeLimit = (max / 1000) * (timeLimit);
	double minTimeLimit1 = (max * 1.0 / 1000 * 1.0) * (timeLimit * 1.0);
	
//	cout << "minTimeLimit int: " << minTimeLimit << endl;
//	cout << "minTimeLimit double: " << minTimeLimit1 << endl;
	
	temp = minTimeLimit1;
	
	if ((minTimeLimit != minTimeLimit1) && (fmod(minTimeLimit1, 2) != 0.0)){
	
		minTimeLimit = temp + 1;
		
		cout << minTimeLimit;
		
	} else if ((minTimeLimit == minTimeLimit1) && (fmod(minTimeLimit1, 2) != 0.0)){
		
		cout << temp - 1;	
		
	} else if ((fmod(minTimeLimit1, 2) == 0.0)){
		
		cout << temp;
	}
	
//	cout << "minimum time limit: " << minTimeLimit;

//	cout << minTimeLimit;
	
	return 0;
}