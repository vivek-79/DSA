class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int high=nums.size()-1;
        int low=0;

        if(nums.size()==1) return 0;
        if(nums[low]>nums[low+1]) return low;
        if(nums[high]>nums[high-1]) return high;

        low=1;
        high -=1;

        while(low<=high){

            int mid=(low+high)/2;

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        };

        return -1;
    }
};