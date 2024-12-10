 int maxDepth(string s) {
        
        int cnt=0;
        int maxi=INT_MIN;

        for(auto c:s){
            if(c=='('){
                cnt++;
            }
            else if(c==')'){
                cnt --;
            }

            maxi=max(maxi,cnt);
        }
        return maxi;
    }