#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<string> parse(string &s)
{
    int n = s.size();
    string a;
    string b;
    string c;
    int pi = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '=')
        {
            pi = i;
            break;
        }
        a.push_back(s[i]);
    }

    for (int i = pi + 1; i < n; i++)
    {
        if (s[i] == '+')
        {
            pi = i;
            break;
        }
        b.push_back(s[i]);
    }

    for (int i = pi + 1; i < n; i++)
        c.push_back(s[i]);

    return {a, b, c};
}

bool isNumber(string &s)
{
    if (s[0] <= '0' || s[0] > '9')
        return false;

    for (char ch : s)
    {
        if (ch < '0' || ch > '9')
            return false;
    }

    return true;
}

string makeFormat(string s)
{
    int n = s.size();
    reverse(s.begin(), s.end());
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(s[i]);

        if (i == n - 1 || i == 0)
            continue;

        if ((i + 1) % 3 == 0)
        {
            ans.push_back('\'');
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    vector<string> input = parse(s);
    string a = input[0];
    string b = input[1];
    string c = input[2];

    if (isNumber(c))
    {
        c = makeFormat(c);
    }

    if (isNumber(b))
    {
        b = makeFormat(b);
    }

    cout << a << "=" << b << "+" << c << endl;
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