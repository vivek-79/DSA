class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int colm=matrix[0].size();

        int low=0;
        int high =(row*colm)-1;

        while(low<=high){

            int mid=(low+high)/2;

            int crow=mid/colm;
            int ccolm=mid%colm;

            int num=matrix[crow][ccolm];
            if(num==target){
                return true;
            }
            else if(num <target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return false; 
    }
};