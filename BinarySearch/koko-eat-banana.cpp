class Solution {
public:
    int findMax(vector<int>& piles){

        int ans=INT_MIN;
        for(int i=0;i<piles.size();i++){

            ans=max(ans,piles[i]);
        }
        return ans;
    }

    int findTime(vector<int>& piles,int k){

        int ans=0;
        for(int i=0;i<piles.size();i++){

            ans +=ceil((double)piles[i]/(double)k);
        }

        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int high=findMax(piles);

        int low=1;
        int ans=high;
        while(low<=high){

            int mid=(high+low)/2;

            int time=findTime(piles,mid);

            if(time<=h){
                    ans=mid;
                    high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};