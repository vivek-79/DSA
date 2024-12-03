
//type 1 +ve = -ve
vector<int> rearrangeArray(vector<int>& nums) {
        
        int len = nums.size();

        vector<int> ans(len,0);
        int posIndx=0;
        int negIndx=1;
        for(int i=0;i<len;i++){

            if(nums[i] >=0){
                ans[posIndx] =nums[i];
                posIndx +=2;
            }
            else{
                ans[negIndx] =nums[i];
                negIndx +=2;
            }
        }
        return ans;
    }
