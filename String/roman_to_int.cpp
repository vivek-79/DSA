int romanToInt(string s) {
        
        map<char,int> mpp = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        int i=0;
        int len=s.length();
        int sum=0;
        while(i<len){

            if(mpp[s[i]]<mpp[s[i+1]]){

                sum +=mpp[s[i+1]]-mpp[s[i]];
                i+=2;
            }
            else{
                sum+=mpp[s[i]];
                i++;
            }
        }

        return sum;
    }