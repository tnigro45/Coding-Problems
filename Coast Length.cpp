#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main(){
	
	// vector that holds the 4 normal directions
		// with each pair of coordinates
	vector<int> dir = {1, 0, -1, 0, 1};
	
	// problem is using approach "flood-fill"
		// helps to note whether a block is an ocean or an inland lake
	
	// take amount of rows (m) and columns (n)
	int m, n;
	cin >> m >> n;
	
	// 2-D vector of vectors for map/grid
		// the + 2 for the variables is to add an extra ocean tile
		// to get around the land blocking the path (buffer)
	// initializes the entire grid with zeros
	vector<vector<char>> grid(m + 2, vector<char>(n + 2, '0'));
	
	// populate the vector of vectors for input grid
	for (int i = 1; i <= m; i++){
		
		for (int k = 1; k <= n; k++){
			
			cin >> grid[i][k];
		}
	}
	
	// accumulator variable to display number of coastlines
	int res = 0;
	
	// want to traverse through this grid to consider what is a
		// water tile and a lake tile
	// functional allows you to pass everything by reference
		// used to save time
	// beginning of depth-first search (DFS)
	function<void (int, int)> dfs = [&] (int x, int y){
		
		// mark ocean tiles (anything not represented in the grid)
		// no longer want to go back to (already checked)
		grid[x][y] = '2';
		
		// directions where you want to check each tile  
			// (4 for up, down, left, and right)
		for (int i = 0; i < 4; i++){
			
			// set current indexing for row and column based on
				// which direction you go
			int r = x + dir[i];
			
			int c = y + dir[i + 1];
			
			// make sure you're still inside the grid
				// to prevent out of bounds
			if (r < 0 || c < 0 || r >= m + 2 || c >= n + 2){
				
				continue;
			} 
			
			// make sure we don't want to go back to a space we
				// already visited
			// make sure the direction we're going towards is not
				// equal to 2 (visited it)
			if (grid[r][c] == '2'){
				
				continue;
			}
			
			// if there's a land tile, continue
			if (grid[r][c] == '1'){
				
				// increase our result by 1 hit the different edges of land
				res++;
				
				continue;
			}
			
			// we've hit another water tile so do DFS again on the
				// new coordinates
			if (grid[r][c] == '0'){
				
				// call the DFS function
				dfs(r, c);
			}
		}
	};
	
	/*
	
	cout << "Before DFS: \n";
	
	// displays the grid before DFS
	for (int i = 0; i <= m + 1; i++){
		
		for (int k = 0; k <= n + 1; k++){
			
			cout << grid[i][k];
		}
		
		cout << endl;
	}
	
	*/
	
	// call the DFS function
	dfs(0, 0);
	
	/*
	
	cout << "After DFS: \n";
	
	// displays the grid after DFS
	for (int i = 0; i <= m + 1; i++){
		
		for (int k = 0; k <= n + 1; k++){
			
			cout << grid[i][k];
		}
		
		cout << endl;
	}
	
	*/
	
	// displays the number of coastlines
	cout << res;
	
	return 0;
}