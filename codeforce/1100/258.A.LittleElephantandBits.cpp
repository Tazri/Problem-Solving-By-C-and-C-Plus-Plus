// link : https://codeforces.com/problemset/problem/258/A
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
    int cnt = 0;

    for (char ch : s)
        if (ch == '1')
            cnt++;

    if (cnt == s.size())
    {
        string ans(s.size() - 1, '1');
        cout << ans << endl;
        return;
    }

    bool rm = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            cout << s[i];
        else if (rm)
            cout << s[i];
        else
            rm = true;
    }
    cout << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}