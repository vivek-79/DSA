

int maxProduct(vector<int>& nums) {
        
        int len=nums.size();
        int maxi=INT_MIN;
        int prefix=1;
        int sufix=1;
        for(int i=0;i<len;i++){

            if(prefix==0) prefix=1;
            if(sufix==0) sufix=1;

            prefix = prefix*nums[i];
            sufix= sufix*nums[len-1-i];

            maxi=max(maxi,max(prefix,sufix));
        }
        return maxi;
    }