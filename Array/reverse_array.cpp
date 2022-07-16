#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int high = n - 1, low = 0;
    while (high > low)
    {
        swap(arr[low++], arr[high--]);
    }
}

int main()
{

    // code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        reverse(arr, n);
    }
}