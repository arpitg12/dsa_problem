class Solution {
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='P'){
                bool flag=true;
                int run=max(0,i-k);
                for(int j=run;j<i;j++){
                    if(arr[j]=='T'){
                        cnt++;
                        arr[j]='C';
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    int run=min(n-1,i+k);
                    for(int j=i+1;j<=run;j++){
                         if(arr[j]=='T'){
                        cnt++;
                        arr[j]='C';
                        break;
                    }
                    }
                }
            }
        }
        return cnt;
    }
};
