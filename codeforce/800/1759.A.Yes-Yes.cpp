// link : https://codeforces.com/contest/1759/problem/A
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
    set<char> st;
    st.insert('Y');
    st.insert('e');
    st.insert('s');

    for (char ch : s)
    {
        if (!st.count(ch))
        {
            cout << "NO" << endl;
            return;
        }
    }

    string sub = "Yes";
    int fi = 0;
    for (int i = 0; i < sub.size(); i++)
    {
        if (sub[i] == s[0])
        {
            fi = i;
            break;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (sub[fi] != s[i])
        {
            cout << "NO" << endl;
            return;
        }

        fi++;
        fi %= 3;
    }

    cout << "YES" << endl;
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