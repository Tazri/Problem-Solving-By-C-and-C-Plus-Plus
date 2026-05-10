#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    vector<pair<int, pair<int, int>>> stack;
    stack.reserve(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n - 1; i >= 0; i--)
    {
        int vi = v[i];

        if (stack.empty())
        {
            stack.push_back({vi, {0, 0}});
            continue;
        }

        if (v[i] >= stack.back().first)
        {
            stack.back().second.first++;
            stack.back().second.second += vi;
            continue;
        }

        stack.push_back({vi, {0, 0}});
    }

    int move = 0;
    for (pair<int, pair<int, int>> record : stack)
    {
        int bse = record.first;
        int have = record.second.first;
        int sum = record.second.second;

        move += (sum - (bse * have));
    }

    int ans = move;
    for (pair<int, pair<int, int>> record : stack)
    {
        int bse = record.first;
        int have = record.second.first;
        int sum = record.second.second;

        int rm = (sum - (bse * have));
        move -= rm;
        int add = (sum - ((bse - 1) * have));
        move += add;
        ans = max(move, ans);
        move -= add;
        move += rm;
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}