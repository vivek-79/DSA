vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());

        int len=intervals.size();
        vector<vector<int>> ans;

        for(int i=0;i<len;i++){

            if(ans.empty() || ans.back()[1]<intervals[i][0]){

                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else{
                ans.back()[1]= max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }