int floorSqrt(int n) {
        int low=1;
        int high =n;
        int ans=n;
        while(low<=high){
            
            int mid=(high+low)/2;
            
            int val=mid*mid;
            if(val==n) return mid;
            
            else if(val<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }