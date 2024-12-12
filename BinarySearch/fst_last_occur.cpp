class Solution {
public:

    int lowerBound(vector<int>& nums, int target){

        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();

        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                
                low=mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target){

        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();

        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int lower=lowerBound(nums,target);

        if( lower==nums.size() || nums[lower] !=target) return{-1,-1};

        return {lower,upperBound(nums,target)-1};
    }
};