

//brute
 int maxSubArray(vector<int>& nums) {

        int len = nums.size();
        int glbsum=0;
        for(int i=0;i<len;i++){
            int sum =0;
            for(int j=i;j<len;j++){
                sum+=nums[j];

                if(sum>glbsum){
                    glbsum=sum;
                }
            }
        }

        return glbsum;
        
    }  


//optimal->kadans algo


