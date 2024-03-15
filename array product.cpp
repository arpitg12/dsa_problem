vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix;
        vector<int>suffix;
        int mul=1;
        prefix.push_back(1);
        suffix.push_back(1);
        for(int i=1;i<nums.size();i++){
            mul=mul*nums[i-1];
            prefix.push_back(mul);
            }
        mul=1;
        for(int i=nums.size()-2;i>=0;i--){
            mul=mul*nums[i+1];
            suffix.push_back(mul);
            }
        reverse(suffix.begin(),suffix.end());
        vector<int>ans;
        for(int i=0;i<suffix.size();i++){
            int val=suffix[i]*prefix[i];
            ans.push_back(val);
            }
        return ans;
    }
};