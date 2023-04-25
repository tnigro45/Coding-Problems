#include <iostream>
using namespace std;

int main(){
	
	string num1;
	string num2;
	
	cin >> num1;
	cin >> num2;
	
	string newNum1[3];
	string newNum2[3];
	
	for (int i = 0; i < 3; i++){
		newNum1[i] = num1[(3 - 1) - i];
		
		newNum2[i] = num2[(3 - 1) - i];
	}
	
	int check = -1;
	int same = 0;
	
	for (int i = 0; i < 3; i++){
		if (newNum1[i] == newNum2[i]){
			same = -1;
			continue;
			
		} else if (newNum1[i] > newNum2[i]){
			check = 0;
			
			same = 0;
			break;
			
		} else{
			check = -1;
			same = 0;
	
			break;
		}
	}
	
	if (same == -1){
		for (int i = 0; i < 3; i++){
			cout << newNum2[i];
		}
		
		return 0;
	}
	
	if (check == 0){
		
		for (int i = 0; i < 3; i++){
			cout << newNum1[i];
		}
		
	} else if (check == -1){
		
		for (int i = 0; i < 3; i++){
			cout << newNum2[i];
		}
	}
	
	return 0;
}