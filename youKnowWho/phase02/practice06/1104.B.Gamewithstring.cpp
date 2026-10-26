// link : https://codeforces.com/contest/1104/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    stack<char> stk;

    for (char ch : s)
    {
        if (stk.empty())
        {
            stk.push(ch);
            continue;
        }

        if (stk.top() == ch)
        {
            stk.pop();
            continue;
        }

        stk.push(ch);
    }

    int left = s.size() - stk.size();
    int turn = left / 2;

    if (turn & 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}