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

vector<int> take()
{
    string s;
    cin >> s;
    vector<int> v;
    v.reserve(s.size());

    for (char ch : s)
    {
        if (ch == '-')
            continue;
        v.push_back((int)ch - (int)'0');
    }
    reverse(v.begin(), v.end());
    return v;
}

void _DIBBA(int caseno)
{
    cout << "Case " << caseno << ": ";
    vector<int> stk = take();
    int b;
    cin >> b;
    b = abs(b);

    int remainder = 0;

    while (stk.size())
    {
        if (remainder >= b)
        {
            remainder %= b;
        }
        else if (stk.size() > 0)
        {
            remainder *= 10;
            remainder += stk.back();
            stk.pop_back();
        }
    }

    remainder %= b;

    if (remainder)
        cout << "not divisible" << endl;
    else
        cout << "divisible" << endl;
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