// link : https://codeforces.com/contest/1781/problem/B
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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    int ans = 0;

    // group by gone
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (i >= arr[i])
                ans++;
            continue;
        }

        if (i >= arr[i] && i + 1 < arr[i + 1])
            ans++;
    }

    if (arr[0] != 0)
        ans++;

    cout << ans << endl;
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