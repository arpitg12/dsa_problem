class Solution {
public:
    int maxArea(vector<int>& height) {
        int min_idx=0;
        int max_idx=height.size()-1;
        
        int maxi=0;
        
        while(min_idx<max_idx){
                    int min_h=min(height[min_idx],height[max_idx]);
            
            maxi=max(maxi,min_h*(max_idx-min_idx));
            
            if(height[min_idx]>height[max_idx]){
                max_idx--;
                }
            else{
                min_idx++;
                }
            }
        return maxi;
    }
};