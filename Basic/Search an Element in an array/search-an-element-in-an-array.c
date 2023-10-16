//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>


// } Driver Code Ends
//User function Template for C
int search(int arr[], int N, int X)
    {
        for(int i=0;i<N;i++){
            if(X==arr[i]){
                return i;
            }
        }
        return -1;//for cases which are not found
       
    }

//{ Driver Code Starts.

int main()
{
    int testcases;
    scanf("%d", &testcases);
    while(testcases--)
    {
        int sizeOfArray;
        scanf("%d", &sizeOfArray);
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        printf("%d\n", search(arr,sizeOfArray,x)); //Linear search
    }

    return 0;
    
}

// } Driver Code Ends