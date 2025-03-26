// link : https://codeforces.com/problemset/problem/1726/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int li = n - 1;

    int fmx = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        fmx = max(fmx, arr[i] - arr[0]);
    }

    int lmx = arr[li] - arr[0];

    for (int i = 0; i < li; i++)
    {
        lmx = max(lmx, arr[li] - arr[i]);
    }

    int mmx = arr[0] - arr[1];
    for (int i = 1; i < n; i++)
    {
        mmx = max(mmx, arr[i - 1] - arr[i]);
    }

    int ans = max(fmx, lmx);
    ans = max(ans, mmx);
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}