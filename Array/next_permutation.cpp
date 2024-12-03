 void nextPermutation(vector<int>& nums) {
        
        int len=nums.size();
        int indx=-1;

        for(int i=len-2;i>=0;i--){

            if(nums[i]<nums[i+1]){
                indx=i;
                break;
            }
        }

        if(indx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{

            for(int i= len-1;i>indx;i--){

                if(nums[i]>nums[indx]){
                    swap(nums[i],nums[indx]);
                    break;
                }
            }

            reverse(nums.begin()+indx+1,nums.end());
        }
    }