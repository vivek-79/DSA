void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int big=m-1;
        int small=n-1;
        int p=m+n-1;

        while(small>=0){

            if(big>=0 && nums1[big]>nums2[small]){

                nums1[p]=nums1[big];
                big--;
            }
            else{
                nums1[p]=nums2[small];
                small--;
            }
            p--;
        }
    }