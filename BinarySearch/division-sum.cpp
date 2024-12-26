class Solution {
public:

    int find(vector<int>& nums){

        int ans=INT_MIN;

        for(int i=0;i<nums.size();i++){
            ans=max(ans,nums[i]);
        }
        return ans;
    }

    int calc(vector<int>& nums,int val){

        int ans=0;

        for(int i=0;i<nums.size();i++){

            ans +=ceil((double)nums[i]/(double)val);
        }

        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int high=find(nums);
        int low=1;
        int ans=0;
        while(low<=high){

            int mid=(low+high)/2;

            int val=calc(nums,mid);

            if(val<=threshold){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};