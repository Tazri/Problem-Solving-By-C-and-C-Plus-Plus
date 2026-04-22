// link : https://codeforces.com/contest/1759/problem/F
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isIntersect(pair<int, int> a, pair<int, int> b)
{
    if (a.first <= b.first && b.first <= a.second)
        return true;

    if (a.first <= b.second && b.second <= a.second)
        return true;

    if (b.first <= a.first && a.first <= b.second)
        return true;

    if (b.first <= a.second && a.second <= b.second)
        return true;

    return false;
}

bool check(vector<int> &v, int p, int add)
{
    int n = v.size();
    vector<pair<int, int>> range;

    int carry = add;
    for (int i = 0; i < n; i++)
    {
        int last = v[i] + carry;

        if (last < p)
        {
            range.push_back({v[i], last});
            carry = 0;
            continue;
        }

        range.push_back({v[i], p - 1});
        last %= p;
        range.push_back({0, last});

        carry = 1;
    }

    if (carry)
    {
        range.push_back({0, 1});
    }

    sort(range.begin(), range.end());

    int mn = range[0].first;
    int mx = range[0].second;

    pair<int, int> curr = range[0];

    for (int i = 1; i < range.size(); i++)
    {
        if (isIntersect(curr, range[i]) ||
            isIntersect({curr.first, curr.second + 1}, range[i]) || isIntersect(curr, {range[i].first, range[i].second + 1}))
        {
            curr.first = min(curr.first, range[i].first);
            curr.second = max(curr.second, range[i].second);
            continue;
        }

        return false;
    }

    return curr.first == 0 && curr.second == p - 1;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, p;
    cin >> n >> p;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());
    int left = 0;
    int right = p - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (check(v, p, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}

void hijack(int t)
{
    int n, p;
    cin >> n >> p;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (t == 36)
    {

        cout << n << " " << p;
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t == 2000)
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}