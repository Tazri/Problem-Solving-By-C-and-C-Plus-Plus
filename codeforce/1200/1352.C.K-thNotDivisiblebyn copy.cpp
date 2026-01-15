// link : https://codeforces.com/contest/1352/problem/C
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

#define int ll

void program()
{
    int n, k;
    cin >> n >> k;

    int l = 1;
    int r = n * k + 1;
    int ans = 0;

    queue<pair<int, int>> q;
    set<pair<int, int>> visited;
    visited.insert({l, r});
    q.push({l, r});

    while (q.size())
    {
        pair<int, int> range = q.front();
        q.pop();
        int l = range.first;
        int r = range.second;

        int mid = l + (r - l) / 2;

        vector<int> mids;

        if (mid % n == 0)
        {
            mids.push_back(mid + 1);
            mids.push_back(mid - 1);
        }
        else
        {
            mids.push_back(mid);
        }

        for (int mi : mids)
        {
            int th = mi - (mi / n);

            if (th == k)
            {
                cout << mi << endl;
                return;
            }

            pair<int, int> nextRange;
            if (th < k)
                nextRange = {mid + 1, r};
            else
                nextRange = {l, mid - 1};

            if (visited.count(nextRange) || nextRange.first > nextRange.second)
                continue;
            visited.insert(nextRange);
            q.push(nextRange);

            continue;
        }
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}