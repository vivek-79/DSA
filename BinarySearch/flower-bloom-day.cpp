class Solution {
public:

    int findHigh(vector<int>& nums){

        int ans=INT_MIN;

        for(int i=0;i<nums.size();i++){

            ans=max(ans,nums[i]);
        }

        return ans;
    }

    int calc(vector<int>& nums,int day,int k){

        int ans=0;
        int cnt=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i]<=day){
                cnt++;

                if(cnt==k){
                    ans+=1;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }

        return ans;
    }
    int minDays(vector<int>& nums, int m, int k) {
        
        long long maxi=nums.size();

        if(maxi<((long long)m*k)) return -1;

        int high=findHigh(nums);

        int low=1;
        int ans=-1;

        while(low<=high){

            int mid=(low+high)/2;

            int bookey=calc(nums,mid,k);

            if(bookey>=m){
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