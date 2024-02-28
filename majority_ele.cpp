class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        if (n == 1) return arr[0];
    
    int cnt = 1;
      // sort the array, o(nlogn)
    sort(arr, arr + n);
    for (int i = 1; i <= n; i++){
        if (arr[i - 1] == arr[i]){
            cnt++;
        }
        else{
            if (cnt > n / 2){
                return arr[i - 1];
            }
            cnt = 1;
        }
    }
    // if no majority element, return -1
    return -1;
}
        
    };