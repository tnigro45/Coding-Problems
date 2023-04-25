#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int cases, rows, columns = 0;
	cin >> cases;
	
	for (int i = 0; i < cases; i++){
		
		cin >> rows;
	  cin >> columns;
	  
	  string picture[rows];
	  
	  for (int i = 0; i < rows; i++){
		
			cin >> picture[i];
		}
		
		cout << "Test " << i + 1 << endl;
		
		for (int i = rows - 1; i >= 0; i--){
		
			reverse(picture[i].begin(), picture[i].end());
		
			cout << picture[i] << endl;
		}
	}
	
	return 0;
}