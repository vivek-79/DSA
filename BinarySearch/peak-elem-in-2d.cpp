class Solution {
public:

    int find(vector<vector<int>>& matrix,int mid){

        int row=matrix.size();
        int maxi=INT_MIN;
        int ans=-1;

        for(int i=0;i<row;i++){
           
           if( matrix[i][mid] >maxi){
                maxi =matrix[i][mid];
                ans=i;
           }
        }
        return ans;
    }
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();

        int low=0;
        int high =col-1;

        while(low<=high){

            int mid=(low+high)/2;

            int peak=find(matrix,mid);

            int left= mid>0 ? matrix[peak][mid-1] :-1;
            int right = mid<col-1 ? matrix[peak][mid+1] :-1;

            int elem = matrix[peak][mid];

            if(elem >left && elem>right){
                return {peak,mid};
            }
            else if( elem <left ){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return {-1,-1};
        
    }
};