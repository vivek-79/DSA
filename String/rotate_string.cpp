bool rotateString(string s, string goal) {

       if(s.length() != goal.length()) return false; 
        
        string doubl= s+s;
        if(doubl.find(goal) != string::npos){
            return true;
        }
        return false;
    }