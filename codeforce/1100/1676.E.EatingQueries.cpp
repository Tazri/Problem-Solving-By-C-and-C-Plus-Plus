// link : https://codeforces.com/problemset/problem/1676/E
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

void program()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a > b; });

    for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    while (q--)
    {
        int x;
        cin >> x;

        if (x > arr[n - 1])
        {
            cout << -1 << endl;
            continue;
        }

        int l = 0;
        int r = n - 1;
        bool isFound = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
            {
                isFound = true;
                cout << mid + 1 << endl;
                break;
            }

            if (arr[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (!isFound)
            cout << l + 1 << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}