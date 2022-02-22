vector<vector<int>> merge(vector<vector<int>>& v) 
    {
        sort(v.begin(), v.end());		
        int start = v[0][0];
        int end = v[0][1];        
		vector<vector<int>> ans;
        
		for(int i=1;i<v.size();i++)
        {
            if(v[i][0] > end)
            {
                ans.push_back({start, end});
                start = v[i][0];
                end = v[i][1];
            }
            else if(v[i][0] <= end)
            {
                end = max(end, v[i][1]);
            }
        }
        ans.push_back({start, end});
        return ans;
    }