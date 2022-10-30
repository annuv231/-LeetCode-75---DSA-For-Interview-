class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, INT_MAX));
        if (k >= m+n-2) return m+n-2;
        queue<vector<int>> q;
        q.push({0, 0, 0});
        visited[0][0] = 0;
        int res = 0;
        vector<int> dir = {-1, 0, 1, 0, -1};
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto item = move(q.front());
                q.pop();
                
                int x = item[0], y = item[1], z = item[2];
                if (x == m-1 && y == n-1) return res;
                for (int j = 0; j < 4; j++)
                {
                    int x1 = x+dir[j];
                    int y1 = y+dir[j+1];
                    
                    if (x1>=0 && x1<m && y1>=0 && y1<n) {
                        int z1 = z+grid[x1][y1];
                        if (z1 < visited[x1][y1] && z1 <= k) {
                            visited[x1][y1] = z1;
                            q.push({x1, y1, z1});
                        }
                    }
                }   
            }
            res ++;
        }
        return -1;
    }
};