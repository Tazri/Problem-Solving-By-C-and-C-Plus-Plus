// link : https://codeforces.com/contest/2237/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define int ll
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    stack<int> stk;

    for (int i = 0; i < n; i++)
    {
        if (stk.size() <= 0 || stk.top() <= v[i])
        {
            stk.push(v[i]);
            continue;
        }

        int back = stk.top();
        stk.pop();
        stk.push(back + v[i]);
    }

    cout << stk.top() << endl;
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