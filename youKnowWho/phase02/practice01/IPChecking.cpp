#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int stringToNum(string s)
{
    stringstream ss(s);
    int n;
    ss >> n;
    return n;
}

int binaryToDc(string s)
{
    reverse(s.begin(), s.end());

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ans += (1 << i);
        }
    }

    return ans;
}

vector<int> parseDcIp(string sip)
{
    vector<int> ans;

    string s = "";

    for (char ch : sip)
    {
        if (ch == '.')
        {
            ans.push_back(stringToNum(s));
            s = "";
            continue;
        }

        s.push_back(ch);
    }

    if (s.size() > 0)
        ans.push_back(stringToNum(s));
    return ans;
}

vector<int> parseBinIp(string sip)
{
    vector<int> ans;

    string s = "";

    for (char ch : sip)
    {
        if (ch == '.')
        {
            ans.push_back(binaryToDc(s));
            s = "";
            continue;
        }

        s.push_back(ch);
    }

    if (s.size() > 0)
        ans.push_back(binaryToDc(s));
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    string dip, bip;
    cin >> dip;
    cin >> bip;

    vector<int> ip1 = parseDcIp(dip);
    vector<int> ip2 = parseBinIp(bip);

    if (ip1 == ip2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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