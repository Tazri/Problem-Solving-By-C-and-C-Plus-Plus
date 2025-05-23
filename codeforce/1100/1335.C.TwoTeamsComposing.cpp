// link : https://codeforces.com/problemset/problem/1335/C
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
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> mp(n + 1, 0);
    int unique = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
        if (mp[s[i]] == 1)
            unique++;
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int mx = 0;
    for (int si : s)
        mx = max(mp[si], mx);

    if (mx == 1)
        cout << 1 << endl;
    else
    {
        if (unique == mx)
            cout << mx - 1 << endl;
        else
            cout << min(unique, mx) << endl;
    }
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