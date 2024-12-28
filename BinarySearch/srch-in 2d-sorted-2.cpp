class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size()-1;
        int curow=0;
        int col=matrix[0].size()-1;

        while(col>=0 && curow<=row){

            if(matrix[curow][col]==target){
                return true;
            }
            else if(matrix[curow][col]>target){
                col--;
            }
            else{
                curow++;
            }
        }

        return false;
    }
};