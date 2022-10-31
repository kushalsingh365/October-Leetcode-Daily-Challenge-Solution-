class Solution 
{
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) 
    {
        // compare each row to the next row shifted by 1 
        for (int i = 1; i < m.size(); i++)
            for (int j = 0; j < m[0].size()-1; j++)
                if (m[i-1][j] != m[i][j+1]) return false;
        return true;
    }
};
