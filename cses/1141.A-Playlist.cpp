// link : https://cses.fi/problemset/task/1141
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
    vector<int> v(n);
    map<int, int> mp;

    for (int &vi : v)
        cin >> vi;

    int l = 0;
    int r = 0;
    int mx = 1;

    while (r < n)
    {
        if (!mp.count(v[r]))
        {
            mp[v[r]] = r;
            int len = r - l + 1;
            mx = max(mx, len);
            r++;
            continue;
        }

        if (mp[v[r]] >= l)
        {
            l = mp[v[r]] + 1;
        }
        mp[v[r]] = r;
        int len = r - l + 1;
        mx = max(len, mx);
        r++;
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}