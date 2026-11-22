class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int highRow = matrix.size()-1;
        int lowRow = 0;
        int midRow = 0;

        int lowCol = 0;
        int highCol = matrix[0].size()-1;
        int midCol = 0;

        while(lowRow <= highRow){
            midRow = (lowRow + highRow) / 2;
            lowCol = 0;
            highCol = matrix[midRow].size()-1;
            while(lowCol <= highCol){
                midCol = (lowCol + highCol) / 2;
                if(target == matrix[midRow][midCol]){
                    return true;
                }
                else if(target > matrix[midRow][midCol]){
                    lowCol = midCol + 1;
                }
                else{
                    highCol = midCol - 1;
                }
            }
            if(lowCol > ((matrix[midRow].size())-1)/2){
                lowRow = midRow + 1;
            }
            else{
                highRow = midRow - 1;
            }
        }
        return false;
    }
};
