#include <iostream>
using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	string doctor;
	cin >> doctor;
	
	int numA1 = 0;
	
	for (int i = 0; i < input.length(); i++){
		if (input[i] == 'a'){
			numA1++;
		}
	}
	
	int numA2 = 0;
	
	for (int i = 0; i < doctor.length(); i++){
		if (doctor[i] == 'a'){
			numA2++;		
		}
	}
	
	if (numA1 >= numA2){
		cout << "go";
	} else{
		cout << "no";
	}
	
	return 0;
}