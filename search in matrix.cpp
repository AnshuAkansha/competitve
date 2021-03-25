class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size(),n=matrix.size(),i=0,j=m-1;
        while(i>=0&&j>=0&&i<n&&j<m)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            //because sorted matrix is given
            else if(matrix[i][j]>target)
                j--;
            else
                i++;
        }
        return false;
    }
};
