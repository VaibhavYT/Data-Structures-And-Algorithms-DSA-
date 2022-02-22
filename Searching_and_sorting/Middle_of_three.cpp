class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
       
        int arr[] = {A,B,C};
        int n=3;
        sort(arr, arr + n);
        return arr[1];

       
    
    }
};
