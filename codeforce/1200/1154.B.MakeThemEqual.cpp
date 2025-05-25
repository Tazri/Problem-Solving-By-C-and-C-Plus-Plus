// link : https://codeforces.com/problemset/problem/1154/B
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
    vector<bool> mp(101, false);

    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);

    int mn, mx;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (mp[ai])
        {
            continue;
        }

        arr.push_back(ai);
        mp[ai] = true;

        if (arr.size() > 3)
        {
            cout << -1 << endl;
            return;
        }

        if (i == 0)
        {
            mn = ai;
            mx = ai;
        }
        else
        {
            mn = min(ai, mn);
            mx = max(ai, mx);
        }
    }

    if (arr.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (arr.size() == 2)
    {
        int cnt = mx - mn + 1;

        if (cnt & 1)
        {
            int mid = (mx + mn) / 2;
            int ans = mx - mid;
            cout << ans << endl;
            return;
        }

        cout << (mx - mn) << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    int mid = arr[1];

    int cnt = mx - mn + 1;

    if (cnt & 1)
    {
        int m = (mx + mn) / 2;

        if (m == mid)
        {
            int ans = mx - m;
            cout << ans << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}