class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int x[4]={-1,1,0,0};
        int y[4]={0,0,-1,1};
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        int time=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=-1;
                }
                else if(grid[i][j]==1) fresh++;
            }
        }
        while(!q.empty()&& fresh>0){
            time++;
            int s=q.size();
            while(s--){
                pair<int,int> p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int i=0;i<4;i++){
                    int nr=r+x[i];
                    int nc=c+y[i];
                    if(nr>=0&&nr<n&&nc>=0&&nc<m&& grid[nr][nc]==1){
                        q.push({nr,nc});
                        grid[nr][nc]=-1;
                        fresh--;
                    }
                }
            }
        }
        if(fresh!=0) return -1;
        return time;
    }
};
