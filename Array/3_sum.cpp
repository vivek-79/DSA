vector<vector<int>> threeSum(vector<int>& nums) {
        
        int len=nums.size();
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        

        for(int i=0;i<len-2;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int j=i+1;int k=len-1;

            while(j<k){

                int sum = nums[i]+nums[j]+nums[k];

                if(sum ==0){
                    ret.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1]) j++;
                    while (k>j && nums[k]==nums[k+1]) k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ret;
    }