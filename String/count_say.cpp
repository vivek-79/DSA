class Solution {
public:
    string countAndSay(int n) {
        

        if (n==1) return "1";

        string say =countAndSay(n-1);

        string result="";

        for(int i=0;i<say.length();i++){

            int cnt=1;
            char ch=say[i];
            while(i<say.length()-1 && say[i]==say[i+1]){
                i++;
                cnt++;
            }

            result +=to_string(cnt);
            result+=string(1,ch);
        }

        return result;
    }
};