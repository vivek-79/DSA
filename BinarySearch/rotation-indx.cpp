int findKRotation(vector<int> &arr) {
        
        int low=0;
        int high=arr.size()-1;
        int ans=INT_MAX;
        int indx=-1;
        
        while(low<=high){
            
            int mid= (low+high)/2;
            
            if(arr[low]<=arr[high]){
                
                if(ans>arr[low]){
                    ans=arr[low];
                    indx=low;
                }
                break;
            }
            else if(arr[low]<=arr[mid]){
                
                if(ans>arr[low]){
                    ans=arr[low];
                    indx=low;
                }
                low=mid+1;
            }
            else{
                if(ans>arr[mid]){
                    ans=arr[mid];
                    indx=mid;
                }
                high=mid-1;
            }
        }
        return indx;
    }