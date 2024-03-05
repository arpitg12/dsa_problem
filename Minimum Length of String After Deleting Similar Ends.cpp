class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                break;
                }
            else if(s[i+1]==s[j-1]){
                i++;
                j--;
        if(i==j && (s[i-1]==s[j] || s[j+1]==s[i])){
     return 0;
                    }
                }
            else if(s[i+1]==s[j]){
                i++;
                }
            else if(s[i]==s[j-1]){
                j--;
                }
            else{
                i++;
                j--;
                break;
                }
            }
        if(i==j){
            return 1;
            }
        return j-i+1;

//c b c
                
    }
};