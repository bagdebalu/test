// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //   BRUTE FORCE
    //     int setBits(int N)
    //     {

    //         int res=0;
    //         while(N)
    //         {
    //             if(N&1)
    //             res++;
    //             N=N>>1;
    //         }
    //         return res;

    //     }

    // OPTIMIZE SOLUTION
    int setBits(int N)
    {
        int res = 0;
        while (N)
        {
            N = N & (N - 1);
            res++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
// } Driver Code Ends