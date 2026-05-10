#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int ll

int findIndex(vector<int> &v)
{
    int n = v.size();
    vector<pair<int, pair<int, int>>> stack;
    stack.reserve(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int vi = v[i];

        if (stack.empty())
        {
            stack.push_back({i, {0, 0}});
            continue;
        }

        if (v[i] >= v[stack.back().first])
        {
            stack.back().second.first++;
            stack.back().second.second += vi;
            continue;
        }

        stack.push_back({i, {0, 0}});
    }

    int move = 0;
    for (pair<int, pair<int, int>> record : stack)
    {
        int bse = v[record.first];
        int have = record.second.first;
        int sum = record.second.second;

        move += (sum - (bse * have));
    }

    int ans = move;
    int index = -1;
    for (pair<int, pair<int, int>> record : stack)
    {
        int bse = v[record.first];
        int have = record.second.first;
        int sum = record.second.second;

        int rm = (sum - (bse * have));
        move -= rm;
        int add = (sum - ((bse - 1) * have));
        move += add;

        if (move > ans)
        {
            index = record.first;
            ans = move;
        }
        move -= add;
        move += rm;
    }

    return index;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ri = findIndex(v);
    if (ri != -1)
    {
        v[ri]--;
    }

    ordered_multiset<int> mt;

    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            mt.insert(0);
            continue;
        }

        int left = 1;
        int right = v[i];
        int added = 0;
        int times = 0;
        while (left <= right)
        {
            times++;

            if (times > 100)
                break;
            int li = mt.order_of_key(left);
            int l = left;
            int r = right;
            int k = -1;
            while (l <= r)
            {
                int mid = (r + l) / 2;

                if (mt.order_of_key(mid) == li)
                {
                    k = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            int totalBox = k - left + 1;
            int add = totalBox * li;
            ans += add;
            left = k + 1;
            added += add;
        }

        mt.insert(v[i]);
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