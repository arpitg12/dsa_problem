class Solution{
  public:
    int atoi(string s) {
        int size=s.size()-1;
        bool flag=false;
        int ans;
        int i=0;
        if(s[0]=='-'){
                flag=true;
                size--;
                i++;
            }
        for(int j=i;j<s.size();j++){
            int num=int(s[j])-48;
            if(num>=0 && num<=9){
                ans=ans+num*pow(10,size);
                size--;
            }
            else{
                return -1;
            }
        }
        if(flag){
            return -ans;
        }
        return ans;
    }
};