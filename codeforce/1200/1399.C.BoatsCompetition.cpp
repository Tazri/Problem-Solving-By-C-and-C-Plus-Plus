// link : https://codeforces.com/problemset/problem/1399/C
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
    {
        cin >> vi;
        mp[vi]++;
    }

    sort(v.begin(), v.end());

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (n <= 3)
    {
        cout << 1 << endl;
        return;
    }

    int mx = v[n - 1] + v[n - 2];
    int mn = v[0] + v[1];

    int ans = -1;
    for (int s = mn; s <= mx; s++)
    {
        int cnt = 0;
        for (pair<int, int> p : mp)
        {
            int vi = p.first;
            if (vi >= s)
                continue;
            int lagbe = s - vi;

            if (mp.count(lagbe) == 0)
                continue;
            int barbe = min(mp[lagbe], p.second);
            cnt += barbe;
        }
        cnt /= 2;

        if (ans == -1)
            ans = cnt;
        ans = max(ans, cnt);
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