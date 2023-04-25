#include <iostream>
using namespace std;

int main(){
	
	int size = 0;
	
	cin >> size;
	
	string names[size];
	
	for (int i = 0; i < size; i++){
		cin >> names[i];
	}
	
	int check = -1;
	
	for (int i = 0; i < size - 1; i++){
		
		if ((check == 0 && names[i] < names[i + 1])){
			check = -1;
			i = size;
			
		} else if ((check == 1 && names[i] > names[i + 1])){
			check = -1;
			i = size;
			
		} else if (names[i] < names[i + 1]){
			check = 1;
			
		} else if (names[i] > names[i + 1]){
			check = 0;	
		}
	}
	
	if (check == -1){
		cout << "NEITHER";
	} else if (check == 0){
		cout << "DECREASING";
	} else if (check == 1){
		cout << "INCREASING";
	}
	
	return 0;
}