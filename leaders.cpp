class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>arr;
        arr.push_back(a[n-1]);
        stack<int>stk;
        stk.push(a[n-1]);
        for(int i=n-2;i>=0;i--){
            while(stk.size()>0){
                if(stk.top()<=a[i]){
                    stk.pop();
                }
                else{
                    break;
                }
            }
            if(stk.size()==0){
                arr.push_back(a[i]);
            }
            stk.push(a[i]);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};