// link : https://codeforces.com/problemset/problem/2194/C
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
    int n, k;
    cin >> n >> k;
    vector<string> v(k);

    for (int i = 0; i < k; i++)
        cin >> v[i];

    vector<int> d;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        d.push_back(i);

        if (n / i != i)
            d.push_back(n / i);
    }

    sort(d.begin(), d.end());

    for (int di : d)
    {
        string ans = "";
        bool found = true;

        for (int si = 0; si < di; si++)
        {
            map<char, int> mp;
            int must = n / di;

            for (int i = si; i < n; i += di)
            {
                set<char> st;
                for (int j = 0; j < k; j++)
                {
                    st.insert(v[j][i]);
                }

                for (char ch : st)
                    mp[ch]++;
            }

            char ch = 'X';
            for (pair<char, int> p : mp)
            {
                if (p.second == must)
                {
                    ch = p.first;
                    break;
                }
            }

            if (ch == 'X')
            {
                found = false;
                break;
            }

            ans.push_back(ch);
        }

        if (found)
        {
            int time = n / di;

            for (int ti = 0; ti < time; ti++)
                cout << ans;
            cout << endl;
            return;
        }
    }
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