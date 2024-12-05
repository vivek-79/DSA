vector<int> majorityElement(vector<int>& nums) {
        
        int len = nums.size();

        int mini= (int) (len/3);
        int cnt1=0;int elem1=INT_MIN;
        int cnt2=0;int elem2=INT_MIN;
        vector<int>ans;

        for(int i=0;i<len;i++){
            
            if(cnt1==0 && nums[i] !=elem2){
                elem1=nums[i];
                cnt1 =1;
            }
            else if(cnt2==0 && nums[i] != elem1){
                elem2=nums[i];
                cnt2 =1;
            }

            else if(nums[i]==elem1){
                cnt1++;
            }
            else if(nums[i]==elem2){
                cnt2++;
            }

            else{
                cnt1--;
                cnt2--;
            }
        }
        
        int cnt3=0;int cnt4=0;

        for(int i=0;i<len;i++){

            if(nums[i]==elem1){
                cnt3++;
            }
            else if(nums[i]==elem2){
                cnt4++;
            }
        }

        if(cnt3>mini){
            ans.push_back(elem1);
        }
        if(cnt4>mini){
            ans.push_back(elem2);
        }
        return ans;
    }