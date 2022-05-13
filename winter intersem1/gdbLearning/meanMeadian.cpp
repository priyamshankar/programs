class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
        
        int median=N/2;
        return meduan;
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum;
        sum = 0;
        for (int i; i<N;i++){
            sum=sum+arr[i];
        }
        return sum/N;
    }
}

