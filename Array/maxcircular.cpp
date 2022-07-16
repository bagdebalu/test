

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // num: size of array
    // Function to find maximum circular subarray sum.
    // int maxSubarraySumCircular(vector<int>& A) {
    //     int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
    //     for (int& a : A) {
    //         curMax = max(curMax + a, a);
    //         maxSum = max(maxSum, curMax);
    //         curMin = min(curMin + a, a);
    //         minSum = min(minSum, curMin);
    //         total += a;
    //     }
    //     return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    //}
    int maxsum(int arr[], int n)
    {
        int max_sum = INT_MIN;
        int curr_sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if (curr_sum > max_sum)
                max_sum = curr_sum;
            if (curr_sum < 0)
                curr_sum = 0;
        }
        return max_sum;
    }

    int circularSubarraySum(int arr[], int num)
    {

        // your code here
        int max_normal = maxsum(arr, num), sum = 0;
        if (max_normal < 0)
            return max_normal;
        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
            arr[i] = -arr[i];
        }
        int max_circular = sum + maxsum(arr, num);
        int res = max(max_normal, max_circular);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    // testcases
    cin >> T;

    while (T--)
    {
        int num;

        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        Solution ob;
        // calling function
        cout << ob.circularSubarraySum(arr, num) << endl;
    }

    return 0;
} // } Driver Code Ends