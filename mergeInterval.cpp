class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
      vector<vector<int>>ans;
      sort(in.begin(),in.end());
      int start=in[0][0];
      int end=in[0][1];
      int i=0;
      if(in.size()==1){
        return in;
      }
      bool flag=true;
      while(i<in.size()){
          if(end>=in[i][0]){
            end=max(end,in[i][1]);
            i++;
            flag=true;
          }
          else{
            ans.push_back({start,end});
            start=in[i][0];
            end=in[i][1];
            flag=false;
          }
      }
      if(flag){
         ans.push_back({start,end});
      }  
      return ans;
    }
};