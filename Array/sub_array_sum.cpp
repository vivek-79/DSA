int subarraySum(vector<int>& nums, int k) {
        
        int len = nums.size();
        int sum=0;
        map<int,int>ans;

        ans[0]=1;
        int cnt=0;

        for(int i=0;i<len;i++){

            sum+=nums[i];
            int req=sum-k;

            if(ans.find(req) !=ans.end()){
                cnt +=ans[req];
            }
                ans[sum]++;
        }
        return cnt;
    }