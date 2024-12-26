
pair<int,long long>findRange(vector<int>& arr){

    int low=INT_MIN;
    long long sum=0;

    for(int i=0;i<arr.size();i++){

        sum+=arr[i];

        // as least page a student can have is max a book of size
        low=max(low,arr[i]);
    }

    return {low,sum};
}

bool possible(vector<int>& arr,int mid,int m){

    int i=0;
    int pages=0;
    int student=1;
    while(i<arr.size()){

        if(pages+arr[i]>mid){
            pages=arr[i];
            student++;
            i++;
            if(student>m) return false;
        }
        else{
            pages +=arr[i];
            i++;
        }
    }

    return true;
}
int findPages(vector<int>& arr, int n, int m) {

    if(n<m) return -1;

    auto range = findRange(arr);
    int low = range.first;
    long long high = range.second;

    int ans=-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(possible(arr,mid,m)){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}