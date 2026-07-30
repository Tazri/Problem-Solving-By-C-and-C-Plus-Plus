// link :https://codeforces.com/problemset/problem/2145/C
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

    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
        if (s[i] == 'a')
            v[i + 1] = -1;
        else
            v[i + 1] = 1;

    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;

    int sum = v.back();
    // cout << "sum : " << sum << endl;

    map<int, int> mp;
    mp[0] = 0;
    int ans = -1;
    for (int r = 0; r <= n; r++)
    {
        int lm1 = v[r] - sum;
        // cout << "lm1 : " << lm1 << " r : " << r << " v[r] : " << v[r] << endl;

        if (!mp.count(lm1))
        {
            mp[v[r]] = r;
            continue;
        }
        int l = mp[lm1] + 1;

        int len = r - l + 1;
        // cout << "found" << endl;
        // cout << "len : " << len << endl;
        if (ans == -1)
            ans = len;
        ans = min(ans, len);
        mp[v[r]] = r;
    }

    if (ans == n)
        ans = -1;
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