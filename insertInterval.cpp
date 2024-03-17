class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        vector<vector<int>>ans;
        bool flag=true;
        if(in.size()==0){
            ans.push_back({ne[0],ne[1]});
            return ans;
        }
        if(in[in.size()-1][1]<ne[0]){
            in.push_back({ne[0],ne[1]});
            return in;
        }
         if(in[0][0]>ne[1]){
             ans.push_back({ne[0],ne[1]});
            for(int i=0;i<in.size();i++){
                ans.push_back({in[i][0],in[i][1]});
            }
            return ans;
        }

        int start=0;
        int end=0;
        int i=0;
        while(i<in.size()){
            if(in[i][0]<=ne[0] && in[i][1]>=ne[0]){
                start=in[i][0];
                end=max(ne[1],in[i][1]);
                while(i<in.size() && end>=in[i][0]){
                    end=max(end,in[i][1]);
                    i++;
                }
                ans.push_back({start,end});
                start=0;
                end=0;
            }
            // else if(in[i][0]<=ne[0] && in[i][1]<ne[0]){
            //     start=in[i][0];
            //     end=max(ne[1],in[i][1]);
            //     while(i<in.size() && end>=in[i][0]){
            //         end=max(end,in[i][1]);
            //         i++;
            //     }
            //     ans.push_back({start,end});
            //     start=0;
            //     end=0;
            // }
            else if(in[i][0]>ne[0] && in[i][0]<=ne[1]){
                start=min(ne[0],in[i][0]);
                end=max(in[i][1],ne[1]);
                 while(i<in.size() && end>=in[i][0]){
                    end=max(end,in[i][1]);
                    i++;
                }
                ans.push_back({start,end});
                start=0;
                end=0;
            }
            else if(i!=0 && flag && (in[i-1][1]<ne[0] && in[i][0]>ne[1])){
                ans.push_back({ne[0],ne[1]});
                start=0;
                end=0;
                flag=false;
            }
            else{
                ans.push_back({in[i][0],in[i][1]});
                start=0;
                end=0;
                i++;
            }
        }
        return ans;
    }
};