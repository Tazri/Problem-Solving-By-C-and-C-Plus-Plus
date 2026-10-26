// link : https://codeforces.com/problemset/problem/1619/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> v;

void precal()
{
    set<int> st;
    for (int i = 1; i * i < (ll)2e9; i++)
    {
        st.insert(i * i);
    }

    for (int i = 1; i * i * i < (ll)2e9; i++)
    {
        st.insert(i * i * i);
    }

    for (int si : st)
        v.push_back(si);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int vi : v)
    {
        if (vi <= n)
        {
            cnt++;
        }
        else
            break;
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}