string frequencySort(string s) {
        
        unordered_map <char,int> mpp;

        for(auto c:s){
            mpp[c]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto entry:mpp){
            pq.push({entry.second,entry.first});
        }

        string ans ="";
        while( !pq.empty()){
            auto[freq,ch] = pq.top();
            pq.pop();
            ans.append(freq,ch);
        }

        return ans;
    }