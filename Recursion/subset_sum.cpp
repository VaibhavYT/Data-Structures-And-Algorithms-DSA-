vector<int> res;
    void helper(vector<int> arr,int idx,int n,int sum){
        if(idx==n) return;
        for(int j=idx;j<n;j++){
            res.push_back(sum+arr[j]);
            helper(arr,j+1,n,sum+arr[j]);
        }
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        res.push_back(0);
        helper(arr,0,n,0);
        return res;
    }