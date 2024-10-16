//palidrom

 bool isPalindrome(int x) {

        if(x<0) return false;

        int actual=x;
        long rev=0;

        while(x !=0){
            int ld=x%10;
            x=x/10;
            rev=rev*10+ld;
        }
        if(rev==actual){
            return true;
        }
        return false;
    }