class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()||grid[0].empty())return 0;
        int m = grid.size(), n = grid[0].size(), answer = 0;
        vector<vector<bool>> visited (m,vector<bool>(n));
        for(int i =0; i < m; i++){
            for(int j = 0; j <n; j++){
                if(grid[i][j] == '0' || visited[i][j]) continue;
                helper(grid, visited, i, j);
                answer++;
            }
        }
        return answer;
    }
    void helper(vector<vector<char>>& grid, vector<vector<bool>>& visited, int m, int n){
        if(m < 0|| n < 0 || m >= grid.size()|| n >= grid[0].size()|| grid[m][n] == '0'|| visited[m][n])return;
        visited[m][n] = true;
        helper(grid, visited, m+1,n);
        helper(grid, visited, m-1,n);
        helper(grid, visited, m,n+1);
        helper(grid, visited, m,n-1);
    }
};
