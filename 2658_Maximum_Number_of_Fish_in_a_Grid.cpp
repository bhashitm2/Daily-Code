class Solution {
public:
    void dfs(int x,int y,vector<vector<int>>&grid, int &sum, vector<vector<bool>>&visited){
        vector<int>rows={0,-1,0,1};
        vector<int>cols={-1,0,1,0};
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<4;i++){
            int nx=x+rows[i];
            int ny=y+cols[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny] && grid[nx][ny]>0){
                visited[nx][ny]=true;
                sum+=grid[nx][ny];
                dfs(nx,ny,grid,sum,visited);
            }
        }

    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int maxFish=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0){
                    vis[i][j]=true;
                    int sum=grid[i][j];
                    dfs(i,j,grid,sum,vis);
                    maxFish=max(sum,maxFish);
                }
            }
        }
        return maxFish;
    }
};