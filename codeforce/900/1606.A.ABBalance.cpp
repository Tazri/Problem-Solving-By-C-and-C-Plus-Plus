// link : https://codeforces.com/problemset/problem/1606/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    string s;
    cin >> s;
    int n = s.size();

    int cnt = 0;

    for (int i = 1; i < n; i++)
        if (s[i] != s[i - 1])
            cnt++;

    if (cnt % 2 == 0)
    {
        cout << s << endl;
        return;
    }

    if (s[0] == s[1])
    {
        s[0] = s[1] == 'a' ? 'b' : 'a';
        cout << s << endl;
        return;
    }

    if (s[n - 1] == s[n - 2])
    {
        s[n - 1] = s[n - 2] == 'a' ? 'b' : 'a';
        cout << s << endl;
        return;
    }

    vector<int> v;
    v.reserve(n);

    for (char &ch : s)
    {
        if (v.empty())
        {
            if (ch == 'a')
                v.push_back(-1);
            else
                v.push_back(1);
            continue;
        }

        if (ch == 'a')
        {
            if (v.back() < 0)
                v.back()--;
            else
                v.push_back(-1);
        }
        else
        {
            if (v.back() > 0)
                v.back()++;
            else
                v.push_back(1);
        }
    }

    int mn = n;
    for (int i = 0; i < v.size(); i++)
        mn = min(abs(v[i]), mn);

    for (int i = 0; i < n; i++)
    {
        if (mn == abs(v[i]))
        {
            v[i] *= -1;
            break;
        }
    }

    string ans = "";
    ans.reserve(n);

    for (int &vi : v)
    {
        if (vi < 0)
        {
            int t = vi * -1;
            for (int i = 0; i < t; i++)
                ans.push_back('a');
            continue;
        }

        for (int i = 0; i < vi; i++)
            ans.push_back('b');
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}