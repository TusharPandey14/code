int dfs(int row, int col, vector<vector<int>> &mat, vector<vector<int>> &vis, 
    int x, int y, int delRow[], int delCol[]) {
        int n = mat.size(); 
        int m = mat[0].size(); 
        
        if(row == x && col == y) {
            return 0; 
        }
        
        vis[row][col] = 1; 
        int ans = 1e9; 
        
        for(int i = 0; i < 4; i++) {
            int nrow = row + delRow[i]; 
            int ncol = col + delCol[i]; 
            
            if(nrow >= 0  && nrow < n && ncol >= 0 && ncol < m
            && mat[nrow][ncol] && !vis[nrow][ncol]) {
                ans = min(ans, 1 + dfs(nrow, ncol, mat, vis, x, y, delRow, delCol)); 
            }
        }
        vis[row][col] = 0; 
        return ans; 
    }
  public:
    int shortestDistance(int N, int M, vector<vector<int>> mat,
    int X, int Y) {
        
        if(mat[0][0] == 0) 
            return -1; 
        
        if(X == N && Y == M) 
            return 0; 
        
        int delRow[] = {-1, 0, +1, 0}; 
        int delCol[] = {0, +1, 0, -1};
        
        vector<vector<int>> vis(N, vector<int> (M, 0)); 
      
        int ans = dfs(0, 0, mat, vis, X, Y, delRow, delCol); 
        
        if(ans == 1e9) 
            return -1; 
        return ans; 
    }
