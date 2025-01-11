// link : https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int n;
    cin >> n;

    vector<int> arr(n);

    // get all
    cin >> arr[0];
    int minH = arr[0];
    int maxH = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];

        minH = min(minH, arr[i]);
        maxH = max(maxH, arr[i]);
    }

    // find the how much distance max from left
    int maxIndex = 0;

    for (maxIndex = 0; maxIndex < n; maxIndex++)
    {
        if (arr[maxIndex] == maxH)
            break;
    }

    // find the how much distance min from right
    int minIndex = n - 1;
    for (minIndex = n - 1; minIndex >= 0; minIndex--)
    {
        if (arr[minIndex] == minH)
            break;
    }

      int swap = maxIndex + n - (minIndex + 1);

    if (maxIndex > minIndex)
    {
        swap--;
    }
    cout << swap << endl;
    return 0;
}