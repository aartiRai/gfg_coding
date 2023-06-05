#User function Template for python3

class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr,N):
        flag=0
        for i in range(len(arr)):
            if arr[i]>=0:
                flag=1
                break
            else:
                flag=0
        if(len(arr)==1):
            return arr[0]
        elif flag==1:
            currsum=0                                   
            mxsum=0
            for i in range(len(arr)):
                currsum+=arr[i]
                if currsum>mxsum:
                    mxsum=currsum
                elif currsum<0:
                    currsum=0
            return mxsum
        else:
            return max(arr)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

 
def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            ob=Solution()
            
            print(ob.maxSubArraySum(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends