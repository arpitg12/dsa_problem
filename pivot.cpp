class Solution {
public:
    int pivotInteger(int n) {
        int i=1;
        int j=n;
        int sumi=0;
        int sumj=0;
        while(i<=j){
            if(sumi<sumj){
                
                sumi=sumi+i;
                i++;
                }
            else if(sumi==sumj){
                sumi=sumi+i;
                i++;
                sumj=sumj+j;
                j--;
                }
            else{
                sumj=sumj+j;
                j--;
                }
            }
        if(sumi==sumj && i-j==2){
            return i-1;
            }
        return -1;
                
    }
};