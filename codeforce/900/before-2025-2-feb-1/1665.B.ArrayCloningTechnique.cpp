// link : https://codeforces.com/problemset/problem/1665/B
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
    map<int, int> mp;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (mp.count(arr[i]) > 0)
        {
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
        }
        else
        {
            mp[arr[i]] = 1;
            mx = max(mx, 1);
        }
    }

    if (mx == n)
    {
        cout << 0 << endl;
        return;
    }

    int u = n - mx;

    int ans = 0;

    while (u > 0)
    {
        ans++;
        int d = min(mx, u);
        u -= d;
        mx += d;
        ans += d;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}