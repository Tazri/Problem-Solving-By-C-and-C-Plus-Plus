#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define int ll
#define endl '\n'

#define FAST()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    stack<pair<int, int>> stk;
    stk.push({v.back(), v.back()});

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] <= stk.top().second)
        {
            stk.push({v[i], v[i]});
            continue;
        }

        pair<int, int> p = stk.top();
        stk.pop();

        p.first += v[i];
        p.second = v[i];

        while (stk.size() > 0 && p.first > stk.top().second)
        {
            p.first += stk.top().first;
            stk.pop();
        }

        stk.push(p);
    }

    int mx = stk.top().first;
    while (stk.size() > 0)
    {
        mx = max(mx, stk.top().first);
        stk.pop();
    }

    cout << mx << endl;
}

int32_t main()
{
    FAST();

    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}