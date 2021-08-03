void dfs(vector<vector<int>>& grid,int i,int j,int color,int target)
    {
        int m=grid.size();
        int n=grid[0].size();
    
            
        if(i<0 or j<0 or  i>=m or j>=n or grid[i][j]!=target or grid[i][j]==color)
        {
            return;
        }

        
        grid[i][j]=color;
        
        dfs(grid,i+1,j,color,target);
        dfs(grid,i-1,j,color,target);
        dfs(grid,i,j+1,color,target);
        dfs(grid,i,j-1,color,target);
        
                        
    }
    
     
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) 
    {
           int target=grid[sr][sc];
            
            dfs(grid,sr,sc,color,target);
        
        
        return grid;
    }
