// link : https://codeforces.com/contest/2188/problem/B
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

    string s;

    cin >> s;

    if (n <= 2)
    {
        cout << 1 << endl;
        return;
    }

    if (s[0] == '0' && s[1] == '0' && s[2] == '0')
        s[1] = '1';
    else if (s[0] == '0' && s[1] == '0')
        s[0] = '1';

    if (s[n - 1] == '0' && s[n - 2] == '0' && s[n - 3] == '0')
        s[n - 2] = '1';
    else if (s[n - 1] == '0' && s[n - 2] == '0')
        s[n - 1] = '1';

    vector<int> v;
    v.reserve(n);
    int cnt = 0;
    for (char &ch : s)
        if (ch == '0')
            cnt++;
        else
        {
            v.push_back(cnt);
            cnt = 0;
        }

    if (cnt)
        v.push_back(cnt);

    // for (int &vi : v)
    //     cout << vi << " ";
    // cout << endl;

    int ans = 0;

    for (int &vi : v)
        ans += (vi / 3);

    for (char &ch : s)
        if (ch == '1')
            ans++;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}