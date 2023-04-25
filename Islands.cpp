#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(vector <vector <char>> &array, 
		vector <vector <bool>> &visited, int i, int k, int r, int c);

int main(){
	
	// variables to hold rows and columns
	int r, c = 0;
	cin >> r >> c;
	
	// array to hold letters
		// declared the grid and the size of the overall size using rows
		// every row has a new vector (array) of size columns
		// created a vector of vectors that hold chars, so that
			// it would hold the entire "grid" of vectors
	vector <vector <char>> array(r, vector <char>(c));
	
	// array to hold if we visited letter before
		// setting all "letters" as false
		// created a vector of vectors that hold bools, so that
			// it would hold the entire "grid" of vectors
	vector <vector <bool>> visited(r, vector <bool>(c, false));
	
	// fill letter array with user-input values
	// even though we're filling the vector with values, we
		// don't need to use push_back() since we have declared
		// that the size of the biggest (Being 50), so anything
		// less than that will be just ignored anyway
		// thus, the reason why we can do like normal array inputing
	for (int i = 0; i < r; i++){
		
		for (int k = 0; k < c; k++){
			
			cin >> array[i][k];
		}
	}
	
	// accumulator variable for number of minimum connected islands
	int islands = 0;
	
	// loop to loop through all of each row in array
	for (int i = 0; i < r; i++){
		
		// loop to loop through columns in letter array
		for (int k = 0; k < c; k++){
			
			// check if letter was visited AND is an island
			if (array[i][k] == 'L' && visited[i][k] == false){
		
				// update total islands seen
				islands++;
				
				// jump to depth-first search recursive function
					// to check other potential lands in a 1 unit radius
				dfs(array, visited, i, k, r, c);
			}
		}
	}
	
	// display total minimum islands in given matrix/graph
	cout << islands;
	
	return 0;
}

// void because we don't return anything since we passed the
	// arrays through pointers instead
void dfs(vector <vector <char>> &array, vector <vector <bool>> &visited, int i, int k, int r, int c){
	
	// holds the offset for checking around letter
	int xMove[4] = {0, 0, 1, -1};
	int yMove[4] = {-1, 1, 0, 0};
	
	// base case
	if(visited[i][k] == true){
		
		// nothing to do, so go back to check next values
		return;
		
		// recursive case
	} else{
		
		// mark that this current letter as being visited
		visited[i][k] = true;
		
		// performs the offset for each variable to get new letter
				// that's in a 1-unit student
		for (int m = 0; m < 4; m++){
			
			// creates new variables to hold new postion for
				// each row and column, to get to a new letter
			int newX = i + xMove[m];
			int newY = k + yMove[m];
			
			// check if new position is viable or breaks if not
			if(newX < 0 || newX >= r || newY < 0 || newY >= c){
				continue;
			}
						
			// recursive condition to loop through rest of letters
			if(array[newX][newY] != 'W'){
				
				// recursively call with new x and y values
					// updated with movement already performed
				dfs(array, visited, newX, newY, r, c);
			}
		}
	}
}