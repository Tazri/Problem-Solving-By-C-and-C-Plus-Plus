// input array and print it reverse
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; // O(1) space
    cin >> n;

    int arr[n]; // O(n) space

    for (int i = 0; i < n; i++) // O(1) space
        cin >> arr[i];

    int l = 0, r = n - 1; // O(2) space
    while (l <= r)
    {
        swap(arr[l], arr[r]);

        l++;
        r--;
    }

    for (int i = 0; i < n; i++) // O(1) space
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // total : O(1+n+1+2+1) = O(n+5) = O(1) space complexity
    return 0;
}