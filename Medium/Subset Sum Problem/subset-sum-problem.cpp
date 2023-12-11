//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>> dp(arr.size(), vector<int>(sum + 1, -1));
        return isSubsetSumHelper(arr, sum, arr.size() - 1, dp);
    }

    bool isSubsetSumHelper(vector<int>& arr, int sum, int n, vector<vector<int>>& dp) {
        // code here
        if (sum < 0) {
            return false;
        }
        if (dp[n][sum] != -1) {
            return dp[n][sum];
        }
        if (n == 0) {
            dp[n][sum] = (sum - arr[0] == 0);
            return dp[n][sum];
        }
        if (sum - arr[n] == 0) {
            dp[n][sum] = 1;
            return dp[n][sum];
        }
        int inc = isSubsetSumHelper(arr, sum - arr[n], n - 1, dp);
        int notInc = isSubsetSumHelper(arr, sum, n - 1, dp);
        dp[n][sum] = inc || notInc;
        return dp[n][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends