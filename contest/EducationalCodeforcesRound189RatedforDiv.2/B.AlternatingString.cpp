#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string getAlt(int n, char ch)
{
    string s(n, 'a');

    for (int i = 0; i < n; i++)
    {
        s[i] = ch;
        ch = ch == 'a' ? 'b' : 'a';
    }

    return s;
}

bool check(string &s, string &t)
{
    int n = s.size();
    int len = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            if (len)
                cnt++;
            len = 0;
            continue;
        }

        if (s[i] != t[i])
            len++;
    }

    if (len)
        cnt++;

    return cnt <= 1;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;

    int n = s.size();

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int a = 0;
    int b = 0;

    for (char ch : s)
        if (ch == 'a')
            a++;
        else
            b++;

    vector<string> v;

    v.push_back(getAlt(n, 'a'));
    v.push_back(getAlt(n, 'b'));

    for (int i = 0; i < v.size(); i++)
    {
        if (check(s, v[i]))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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