class Solution {
public:
    void checkNeighbors(vector<vector<char>>& grid, queue<pair<int,int>>& q, int i, int j){
        if(i != grid.size()-1){
            if(grid[i+1][j] == '1'){
                q.push({i+1,j});
                grid[i+1][j] = 0;
            }
        }
        if(j != grid[i].size() - 1){
            if(grid[i][j+1] == '1'){
                q.push({i,j+1});
                grid[i][j+1] = 0;
            }
        }
        if(i != 0){
            if(grid[i-1][j] == '1'){
                q.push({i-1,j});
                grid[i-1][j] = 0;
            }
        }
        if(j != 0){
            if(grid[i][j-1] == '1'){
                q.push({i,j-1});
                grid[i][j-1] = 0;
            }
        }
        grid[i][j] = '0';
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        std::queue<pair<int,int>> visitQ = {};
        int x = 0;
        int y = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                //if start of island start visit Q
                if(grid[i][j] == '1'){
                    checkNeighbors(grid, visitQ, i, j);
                }
                else{
                    continue;
                }
                while(visitQ.empty() == false){
                    x = visitQ.front().first;
                    y = visitQ.front().second;
                    checkNeighbors(grid, visitQ, x, y);
                    visitQ.pop();
                }
                islands++;
            }
        }
        return islands;
    }
};
