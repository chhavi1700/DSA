class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    void dfs(vector<vector<char>>& grid,vector<vector<bool>>& vis,int n,int m,int r,int c){
        if(r<0||r>=n||c<0||c>=m||vis[r][c]||grid[r][c]=='0'){
            return;
        }
        vis[r][c]=true;
        for(int i=0;i<4;i++){
            int nr=r+x[i];
            int nc=c+y[i];
            if(nr>=0&&nr<n&& nc>=0&&nc<m &&vis[nr][nc]==false&&grid[nr][nc]=='1'){
                dfs(grid,vis,n,m,nr,nc);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!='0'&&vis[i][j]==false){
                    count++;
                    dfs(grid,vis,n,m,i,j);
                }
            }
        }
        return count;
    }
};