class Solution {
public:

    int find(vector<int>& nums, int target,int low,int high){

        if(low>high) return -1;

        int mid=low+(high-low)/2;

        if(target==nums[mid]) return mid;

        else if(target>nums[mid]){
            return find(nums,target,mid+1,high);
        }
        else{
            return find(nums,target,low,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        
        int high=nums.size()-1;
        int ans=find(nums,target,0,high);

        return ans;
    }
};