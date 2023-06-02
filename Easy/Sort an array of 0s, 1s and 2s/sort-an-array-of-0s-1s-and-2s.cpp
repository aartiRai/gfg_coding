//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0;  // Pointer for 0s
    int mid = 0;  // Pointer for 1s
    int high = n - 1;  // Pointer for 2s

    while (mid <= high) {
        if (a[mid] == 0) {
            // Swap 0s to the beginning
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1) {
            // Move forward for 1s
            mid++;
        }
        else {
            // Swap 2s to the end
            swap(a[mid], a[high]);
            high--;
        }
    }
        // code here 
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends