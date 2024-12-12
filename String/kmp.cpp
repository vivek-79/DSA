class Solution {
public:

    void calcLps(string b,vector<int> &lps,int len){

        lps[0]=0;
        int i=1;
        int match=0;
        while(i<len){

            if(b[i]==b[match]){
                match++;
                lps[i]=match;
                i++;
            }
            else{
                
                if(match !=0){
                    match=lps[match-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
    }

    bool find(string &rept,string &pat,vector<int> &lps){

        int patlen=pat.length();
        int reptlen=rept.length();
        int i=0;
        int j=0;
        while(i<reptlen){

            if(rept[i]==pat[j]){
                i++;
                j++;
            }

            if(j==patlen){

                return true;
            }
            else if(rept[i]!=pat[j]){

                if(j !=0){
                    j=lps[j-1];
                }
                else{
                    i++;
                }
            }
        }

        return false;
    }
    int repeatedStringMatch(string a, string b) {
        

        int lena=a.length();
        int lenb=b.length();

        vector<int> lps(lenb,0);

        calcLps(b,lps,lenb);

        int len= (lenb) / lena;

        string reptd="";
         for (int i = 0; i < len; i++) {
            reptd += a;
        }

        bool ans=false;
         ans= find(reptd,b,lps);

        if(ans){
            return len;
        }

        reptd +=a;
          ans= find(reptd,b,lps);

        if(ans){
            return len+1;
        }
        reptd +=a;
          ans= find(reptd,b,lps);

        if(ans){
            return len+2;
        }
        
        return -1;
    }
};