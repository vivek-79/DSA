
        int elem=arr[i];
        elemsum +=arr[i];
        int cnt=1;
        for(int j=i+1;j<len;j++){
            
            if(arr[j]==elem){
                cnt++;
            }
            if(cnt==2){
                missing=elem;
            }
        }